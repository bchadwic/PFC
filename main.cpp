#include <iostream>
#include <windows.h>

int main(){

	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD index=0;
	
	// capture what the screen buffer looks like right now (a buffer is a memory location stored in ram that represents the bitmap being used currently)
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hstdout, &csbi);
	
	SetConsoleTextAttribute(hstdout, FOREGROUND_GREEN | BACKGROUND_RED);
	
	// Output sample	
	std::cout << "Hello World" << std::endl;
	FlushConsoleInputBuffer( hstdin );

	// Keep users happy
	SetConsoleTextAttribute( hstdout, csbi.wAttributes );
	return 0;	
		
}










