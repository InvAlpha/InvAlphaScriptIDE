#include "IDECore.h"

void invalpha::script::ide::IDECore::loadCmd(const int& argc, char** argv)
{
    if (argc == 1)
        std::cout << "[Error] Please use cmd to launch the program!";
    else
    {

    }
}

void invalpha::script::ide::IDECore::getInput()
{
}

void invalpha::script::ide::IDECore::setTextColor(const unsigned short& color)
{
    SetConsoleTextAttribute(handle, color);
}
