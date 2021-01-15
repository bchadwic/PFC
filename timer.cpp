#include "timer.h"
#include <iostream>
#include <windows.h>


Timer::Timer(std::string &arg)
{
    switch(*arg) 
    {
        case "break" :
            std::cout << "You have started a new break timer" << std::endl;
            break;
        case "pomodoro" :
            std::cout << "You have started a new work timer" << std::endl;
            break;
        case "default parameter" :
            std::cout << "You have started a new break timer" << std::endl;
            break;
        default :    
            std::cout << "Invalid arguement" << std::endl;
    }
}		





