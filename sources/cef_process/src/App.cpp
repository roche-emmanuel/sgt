#include "App.h"
#include "PostMessageHandler.h"

namespace cef
{

void App::OnContextCreated(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {
    if(browser->GetMainFrame() != frame) {
        return;
    }

    CHECK(!_context.get(),"Main context was already created.");
    _context = context;        

    // once the context is create, we should assign the global cef object to it:
    // Retrieve the context's window object.
    CefRefPtr<CefV8Value> window = context->GetGlobal();
    
    // Now create a new "cef" object:
    CefRefPtr<CefV8Value> cef = CefV8Value::CreateObject(NULL);

    // Assign this new object to the window:
    window->SetValue("cef", cef, V8_PROPERTY_ATTRIBUTE_NONE);

    // Next we need to add the handler to post new messages from javascript:
    CefRefPtr<CefV8Handler> handler = new PostMessageHandler(browser);

    // Create the "myfunc" function.
    CefRefPtr<CefV8Value> func = CefV8Value::CreateFunction("postMessage", handler);

    // Add the "postMessage" function to the "cef" object.
    cef->SetValue("postMessage", func, V8_PROPERTY_ATTRIBUTE_NONE);

}

void App::OnContextReleased(
    CefRefPtr<CefBrowser> browser,
    CefRefPtr<CefFrame> frame,
    CefRefPtr<CefV8Context> context) {

    if(browser->GetMainFrame() != frame) {
        return;
    }

    CHECK(_context.get(),"Main context was not created before release.");
    _context = NULL;
}

template <class ListType, class IndexType>
CefRefPtr<CefV8Value> getValue(CefRefPtr<ListType> list, IndexType index)
{
    int vtype = list->GetType(index);

    if(vtype==VTYPE_NULL) {
        return CefV8Value::CreateNull();
    }
    else if(vtype==VTYPE_INT) {
        return CefV8Value::CreateInt(list->GetInt(index));
    }
    else if(vtype==VTYPE_DOUBLE) {
        return CefV8Value::CreateDouble(list->GetDouble(index));
    }
    else if(vtype==VTYPE_STRING) {
        return CefV8Value::CreateString(list->GetString(index));
    }
    else if(vtype==VTYPE_DICTIONARY) {
        // In that case we need to create a new sub object:
        CefRefPtr<CefV8Value> obj = CefV8Value::CreateObject(NULL);

        CefRefPtr<CefDictionaryValue> dict = list->GetDictionary(index);
        KeyList keys;

        CHECK_RET(dict->GetKeys(keys),obj,"Cannot retrieve the keys for dictionary.");

        int num = keys.size();
        for(int i=0;i<num;++i) {
            CefString key = keys[i];
            CefRefPtr<CefV8Value> val = getValue<CefDictionaryValue,CefString>(dict,key);
            obj->SetValue(key,val,V8_PROPERTY_ATTRIBUTE_NONE);
        }

        return obj;
    }
    else if(vtype==VTYPE_LIST) {
        CefRefPtr<CefListValue> sublist = list->GetList(index);

        int num = sublist->GetSize();

        // In that case we need to create a new sub object:
        CefRefPtr<CefV8Value> obj = CefV8Value::CreateArray(num);

        for(int i=0;i<num;++i) {
            CefRefPtr<CefV8Value> val = getValue<CefListValue,int>(sublist,i);
            obj->SetValue(i,val);
        }

        return obj;
    }

    ERROR_MSG("Invalid or N binary value received.");
    return CefV8Value::CreateUndefined(); 
}

bool App::OnProcessMessageReceived(CefRefPtr<CefBrowser> browser, CefProcessId source_process,CefRefPtr<CefProcessMessage> message)
{
    // Check if we received the message from the browser process:
    if(source_process!=PID_BROWSER) {
        ERROR_MSG("Received ProcessMessage from process " << source_process);
        return false;
    }

    CHECK_RET(_context.get() && _context->IsValid(),false,"Invalid context in OnProcessMessageReceived.");

    // Once we received this message, we need to convert it into arguments for a call of the message handling
    // method in javascript.
    CHECK_RET(message->IsValid(),false,"Received invalid process message.");

    // Note that here we need to call a javascript function.
    // So first we try to retrieve the function object:

    // First of all, are we in the desired context ?
    bool entered = false;
    if(!CefV8Context::InContext() || CefV8Context::GetCurrentContext()!=_context) {
        entered = true;
        _context->Enter();
    }

    // We should be in a valid V8 context here,
    // so we can retrieve the global object:
    CefRefPtr<CefV8Value> object = _context->GetGlobal();
    CHECK_RET(object->IsValid(),false,"Invalid window object.");

    // Retrieve the cef object:
    CefRefPtr<CefV8Value> cef = object->GetValue("cef");
    CHECK_RET(cef->IsValid() && cef->IsObject(),false,"Invalid cef object.");

    CefRefPtr<CefV8Value> func = cef->GetValue("handleMessage");
    CHECK_RET(func->IsValid() && func->IsFunction(),false,"Invalid handleMessage function.");

    // We have to prepare the arguments to execute the function:
    CefV8ValueList args;

    // Retrieve the name of the process message, to use is as a first argument.
    CefString mname = message->GetName();
    args.push_back(CefV8Value::CreateString(mname));

    // Now retrieve all the arguments from the process message and
    // add them to the complete list of arguments for the javascript function:
    CefRefPtr<CefListValue> list = message->GetArgumentList();

    int num = list->GetSize();

    for(int i=0;i<num;++i) {
       CefRefPtr<CefV8Value> val = getValue<CefListValue,int>(list,i);
       args.push_back(val); 
    }

    // call the function with the provided arguments:
    func->ExecuteFunction(NULL,args);

    // When we are done, we exit the context if needed:
    if(entered) {
        _context->Exit();
    }

    return true;
}

}
