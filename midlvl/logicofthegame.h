#ifndef LOGICOFTHEGAME_H
#define LOGICOFTHEGAME_H
#include <iostream>
#include <random>
#include <ctime>

void logicOfTheGame(int lvl)
{
    srand ( time ( NULL ) ) ;
    int compChoise = rand ( ) % (50 * lvl) + 1, ourChoise;
    for (int i = 0; i < 10; i++) {
        std::cout<<"\nEnter your choise: ";
        std::cin>>ourChoise;
        if(ourChoise > compChoise)
        {
            std::cout<<"Less!";
        }
        else if (ourChoise < compChoise)
        {
            std::cout<<"Greater";
        }
        else if (ourChoise == compChoise)
        {
            std::cout<<"You win!";
            i = 10;
            break;
        }
    }


}

#endif // LOGICOFTHEGAME_H
