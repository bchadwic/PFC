#include <iostream>
#include <windows.h>

int main(){
	const WORD colors[] =
	{
		0x1A, 0x2B, 0x3C, 0x4D, 0x5E, 0x6F,
		0x1B, 0x2F, 0x3B, 0x5D, 0x5A, 0xAF
	};
	// These are the Handles, or non-typed pointers that carry the information going in and out of the console
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
	WORD index=0;
	// capture what the screen buffer looks like right now (a buffer is a memory location stored in ram that represents the bitmap being used currently)
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(hstdout, &csbi);
	
	while (WaitForSingleObject( hstdin, 100 ) == WAIT_TIMEOUT)
	{
		SetConsoleTextAttribute( hstdout, colors[ index ] );
		std::cout << "\t\t\t\t Hello World \t\t\t\t" << std::endl;
		if (++index > sizeof(colors)/sizeof(colors[0]))
			index = 0;
	}
	FlushConsoleInputBuffer( hstdin );

	// Keep users happy
	SetConsoleTextAttribute( hstdout, csbi.wAttributes );
	return 0;	
		
}










