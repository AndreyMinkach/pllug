#include <iostream>
#include "game.h"

int main()
{
    std::string ourChoise;
    std::cout<<"Lets play \nEnter Rock, Scissors or Paper: ";
    std::cin>>ourChoise;
    gameRSP(ourChoise);
}
