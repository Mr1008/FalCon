#pragma once
#include "Window.h"

namespace Views
{
	class MainWindow :
		public Window
	{
	public:
		MainWindow(
			const std::wstring &title,
			int x = CW_USEDEFAULT,
			int y = CW_USEDEFAULT,
			int width = CW_USEDEFAULT,
			int height = CW_USEDEFAULT
		): Window(title, L"MainWindowViewClass", x, y, width, height) 
		{
			hasCustomPaint = true;
		}



	protected:
		virtual void onPaint(HDC hdc, PAINTSTRUCT *ps);
	};
}
