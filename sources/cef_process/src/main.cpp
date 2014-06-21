#include <cef_app.h>
#include <cef_client.h>

// int main(int argc, char *argv[])
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  CefMainArgs args(hInstance);

  // MessageBox(NULL,"Starting SubProcess!","Info",MB_ICONERROR|MB_OK);
  return CefExecuteProcess(args, NULL, NULL);
};
