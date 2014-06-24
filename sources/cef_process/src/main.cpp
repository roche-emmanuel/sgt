
#include "App.h"
#include <cef_client.h>

// int main(int argc, char *argv[])
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  CefMainArgs args(hInstance);

  // Optional implementation of the CefApp interface.
  CefRefPtr<cef::App> app(new cef::App);

  // MessageBox(NULL,"Starting SubProcess!","Info",MB_ICONERROR|MB_OK);
  return CefExecuteProcess(args, app.get(), NULL);
};
