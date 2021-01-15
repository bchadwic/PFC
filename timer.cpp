#include "timer.h"
#include <iostream>
#include <windows.h>


Timer::Timer(const std::string &arg)
{
	std::cout << arg << std::endl;
	if(arg == "break"){
			  std::cout << "You are on break." << std::endl;
	}
  
}		





