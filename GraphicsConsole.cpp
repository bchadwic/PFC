#include "GraphicsConsole.h"
#include <iostream>
#include <windows.h>

class GraphicsConsole
{
public:
	GraphicsConsole(){
		hstdin = GetStdHandle(STD_INPUT_HANDLE);
		hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
		index = 0;
	}	

	// Stores the current color into field csbi	
	void getCurrentColor(){
		GetConsoleScreenBufferInfo(hstdout, &csbi);
	}

	// Sets the buffer to the default color scheme of the console
	void flushBuffer(){
		FlushConsoleInputBuffer( hstdin );
		SetConsoleTextAttribute( hstdout, csbi.wAttributes );
	}

	// Setting the color using using rgb options
	// Background / Foreground Red
	void bgRed(){
		SetConsoleTextAttribute(hstdout, BACKGROUND_RED);
	}	

	void fgRed(){
		SetConsoleTextAttribute(hstdout, FOREGROUND_RED);
	}	

	// Background / Foreground Green
	void bgGreen(){
		SetConsoleTextAttribute(hstdout, BACKGROUND_GREEN);
	}	

	void fgGreen(){
		SetConsoleTextAttribute(hstdout, FOREGROUND_GREEN);
	}

	// Background / Foreground Blue 
	void bgBlue(){
		SetConsoleTextAttribute(hstdout, BACKGROUND_BLUE);
	}
	
	void fgBlue(){
		SetConsoleTextAttribute(hstdout, FOREGROUND_BLUE);
	}	

};
