#include <iostream>
#include "logicofthegame.h"

int main()
{
    std::cout<<"[Level 1] Woul'd like to play? [p] - play, [l]- select level, [q] - quit."<<std::endl;

    char c;
    std::cin>>c;

    switch (c)
    {
    case 'q':
    {
        std::cout<<"Good luck"<<std::endl;
        return 0;
    }
    case 'p':
    {
        std::cout<<"Lets start this game xD";
        logicOfTheGame(1);
        break;
    }
    case 'l':
    {
        int lvl;
        std::cout<<"Choose the lvl of the game ( 1 - 10 )";
        std::cin>>lvl;
        std::cout<<"Lets start this game xD";
        logicOfTheGame(lvl);
        break;
    }
    }

}
