#include "GraphicsConsole.h"
#include <iostream>
#include <windows.h>

	 GraphicsConsole::GraphicsConsole(){
		hstdin = GetStdHandle(STD_INPUT_HANDLE);
		hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
		index = 0;
	}	

	// Stores the current color into field csbi	
	void GraphicsConsole::getCurrentColor(){
		GetConsoleScreenBufferInfo(hstdout, &csbi);
	}

	// Sets the buffer to the default color scheme of the console
	void GraphicsConsole::flushBuffer(){
		FlushConsoleInputBuffer( hstdin );
		SetConsoleTextAttribute( hstdout, csbi.wAttributes );
	}

	// Setting the color using using rgb options
	// Background / Foreground Red
	void GraphicsConsole::bgRed(){
		SetConsoleTextAttribute(hstdout, BACKGROUND_RED);
	}	

	void GraphicsConsole::fgRed(){
		SetConsoleTextAttribute(hstdout, FOREGROUND_RED);
	}	

	// Background / Foreground Green
	void GraphicsConsole::bgGreen(){
		SetConsoleTextAttribute(hstdout, BACKGROUND_GREEN);
	}	

	void GraphicsConsole::fgGreen(){
		SetConsoleTextAttribute(hstdout, FOREGROUND_GREEN);
	}

	// Background / Foreground Blue 
	void GraphicsConsole::bgBlue(){
		SetConsoleTextAttribute(hstdout, BACKGROUND_BLUE);
	}
	
	void GraphicsConsole::fgBlue(){
		SetConsoleTextAttribute(hstdout, FOREGROUND_BLUE);
	}	

