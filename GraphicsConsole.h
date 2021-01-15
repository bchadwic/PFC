#include "GraphicsConsole.h"
#include <iostream>
#include <windows.h>

class GraphicsConsole
{
private:
	HANDLE hstdin;
	HANDLE hstdout;
	WORD index;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
public:
	GraphicsConsole();
	void setCurrentColor();
	void getCurrentColor();
	void bgRed();
	void fgRed();
	void bgGreen();
	void fgGreen();
	void bgBlue();
	void fgBlue();
}
