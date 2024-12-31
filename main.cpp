#include <fstream>
#include <iostream>
#include <string>

int main()
{
    std::ifstream boardFile;

    boardFile.open( "/home/mahdiyousefi/projects/aStarcPP/board.txt" );
    if ( boardFile )
    {
        std::cout << "the board file is open\n";
        std::string line;

        while ( getline( boardFile, line ) )
        {
            std::cout << line << "\n";
        }
    }

    return 0;
}