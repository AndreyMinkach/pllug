#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <random>
#include <ctime>


void gameRSP(std::string ourChoise)
{
    srand ( time ( NULL ) ) ;

    int compChoise = rand ( ) % 3 + 1 ;

    switch (compChoise)
    {
    case 1: //comp random choise will be rock
       { if(ourChoise == "Scissors")
        {
            std::cout<<"Looser";
            break;
        }
        if(ourChoise == "Paper")
        {
            std::cout<<"You win!!";
            break;
        }
        if (ourChoise == "Rock")
        {
            std::cout<<"Try again\n";
            std::cin>>ourChoise;
            gameRSP(ourChoise);
    }break;}
     case 2: //comp random choise will be Scissors
       { if(ourChoise == "Paper")
        {
            std::cout<<"Looser";
            break;
        }
        if(ourChoise == "Rock")
        {
            std::cout<<"You win!!";
            break;
        }
        if (ourChoise == "Scissors")
        {
            std::cout<<"Try again\n";
            std::cin>>ourChoise;
            gameRSP(ourChoise);
        }break;}
     case 3: //comp random choise will be Paper
       { if(ourChoise == "Rock")
        {
            std::cout<<"Looser";
            break;
        }
        if(ourChoise == "Scissors")
        {
            std::cout<<"You win!!";
            break;
        }
        if (ourChoise == "Paper")
        {
            std::cout<<"Try again\n";
            std::cin>>ourChoise;
            gameRSP(ourChoise);
        }break;}
    default:
       {
        std::cout << "Wrong input" << std::endl;
        std::cin>>ourChoise;
        gameRSP(ourChoise);
        }
    }
}

#endif // GAME_H
