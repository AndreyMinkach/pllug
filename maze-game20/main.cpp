#include "gamelogic.h"
#include "gamesymbols.h"

// Checks if user want so play
// Return true if user wants to play; false otherwise


int main()
{
    while (doesUserWantsToPlay())
    {
        playMazeGame();
    }
}
