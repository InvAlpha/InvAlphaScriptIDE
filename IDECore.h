#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <Windows.h>

namespace invalpha
{
    namespace script
    {
        namespace ide
        {
            class IDECore
            {
            public:
                void loadCmd(const int& argc, char** argv);
                void getInput();
                void setTextColor(const unsigned short& color);
            private:
                std::vector<std::string> current_file;
                std::size_t current_lineno = 1;
                HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
            };
        }
    }
}