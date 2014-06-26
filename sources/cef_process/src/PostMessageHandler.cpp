#include "PostMessageHandler.h"

namespace cef
{

PostMessageHandler::PostMessageHandler(CefRefPtr<CefBrowser> browser) : _browser(browser)
{
}

template <class ListType, class IndexType>
void setListValue(CefRefPtr<ListType> list, IndexType index, CefRefPtr<CefV8Value> item)
{
    CHECK(item.get() && item->IsValid(),"Invalid V8Value in setListValue");

    if (item->IsNull() || item->IsUndefined())
    {
        list->SetNull(index);
    }
    else if(item->IsDouble()) {
        list->SetDouble(index,item->GetDoubleValue());
    }
    else if(item->IsInt()) {
        list->SetInt(index,(int)item->GetIntValue());
    } 
    else if(item->IsUInt()) {
        list->SetInt(index,(int)item->GetUIntValue());
    }    
    else if(item->IsBool()) {
        list->SetBool(index,item->GetBoolValue());
    }
    else if(item->IsString()) {
        list->SetString(index,item->GetStringValue());
    }
    else if(item->IsArray()) {
        
        int num = item->GetArrayLength();

        // prepare a new sublist to hold the array data:
        CefRefPtr<CefListValue> sublist = CefListValue::Create();
        sublist->SetSize(num);
        for(int i=0;i<num;++i) {
            CefRefPtr<CefV8Value> val = item->GetValue(i);
            setListValue<CefListValue,int>(sublist,i,val);
        }

        list->SetList(index,sublist);
    }
    else if(item->IsObject()) {
        
        KeyList keys;
        CHECK(item->GetKeys(keys),"Cannot retrieve keys for object.");

        // prepare a new sublist to hold the array data:
        CefRefPtr<CefDictionaryValue> dict = CefDictionaryValue::Create();

        int num = keys.size();
        for(int i=0;i<num;++i) {
            CefString key = keys[i];

            CefRefPtr<CefV8Value> val = item->GetValue(key);
            setListValue<CefDictionaryValue,CefString>(dict,key,val);
        }

        list->SetDictionary(index,dict);
    }
    else if(item->IsDate()) {
        ERROR_MSG("Unsupported Value type 'Date' in setListValue()");
        list->SetNull(index);
    }
    else if(item->IsFunction()) {
        ERROR_MSG("Unsupported Value type 'Function' in setListValue()");
        list->SetNull(index);
    }
    else if(item->IsUserCreated()) {
        ERROR_MSG("Unsupported Value type 'UserCreated' in setListValue()");
        list->SetNull(index);
    }
}



bool PostMessageHandler::Execute(const CefString& name,
                   CefRefPtr<CefV8Value> object,
                   const CefV8ValueList& arguments,
                   CefRefPtr<CefV8Value>& retval,
                   CefString& exception) {
    
    if (name != "postMessage") {
        ERROR_MSG("Invalid post message handler name: " << name.ToString());
        return false;
    }

    //DEBUG_MSG("Executing postMessage from javascript.");

    // We should have at list one argument, and the first arg should be the name to use for this message:
    size_t num = arguments.size();
    CHECK_RET(num>0,false,"Invalid number of arguments.");
    //DEBUG_MSG("Got num="<<num<< "arguments.");

    CefRefPtr<CefV8Value> arg1 = arguments[0];
    CHECK_RET(arg1->IsString(),false,"The argument 1 is not a string.");

    // Extract the message name:
    CefString mname = arg1->GetStringValue();

    // So now we prepare a ProcessMessage for it:
    //DEBUG_MSG("Creating process message.");
    CefRefPtr<CefProcessMessage> msg = CefProcessMessage::Create(mname);

    // check if we need to populate the argument list:
    if(num>1) {
        //DEBUG_MSG("assigning additional arguments.");
        // Prepare the list of arguments:
        CefRefPtr<CefListValue> list = msg->GetArgumentList();
        list->SetSize(num-1);

        // we check the provided arguments one by one:
        for(size_t i=1; i<num;++i) {
            setListValue<CefListValue,int>(list,i-1,arguments[i]);
        }      
    }

    // Send the Process message:
    //DEBUG_MSG("Sending process message.");
    _browser->SendProcessMessage(PID_BROWSER,msg);
    //DEBUG_MSG("Process message sent.");

    // function was handled properly:
    return true;
}



}
