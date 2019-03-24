#include "pch.h"
#include "MessagePipe.h"
#include "MainWindow.h"
#include "Direct2DCanvas.h"

using namespace Messages;
using namespace Views;

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE, PWSTR pCmdLine, int nCmdShow)
{
	ViewBase::set_hInstance(hInstance);
	MainWindow window(L"Falcon");
	// Direct2DCanvas d2d(L"Test");
	// window.addChild(d2d);
	window.show();
	MessagePipe::start();
	return 0;
}