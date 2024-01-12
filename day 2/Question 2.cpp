/**
 * In a gaming hub, N number of players were playing the same type of game. All players got stuck at the pillar level in the game, each with a different score. The owner of the gaming hub announced that players can pass that level if they can break two pillars. Both pillars have their own health points.
The trick is to break one pillar at a time that if the player's current score is multiplied up to a certain point then it should be equal to the pillar's health. The same trick is to be used for the other pillar. If there is no number that can be multiplied with the player's score to make the score equal to the pillar's health, then that player loses. A player can only break one pillar at a time and if the player is not able to break both the pillars then they will not be able to clear the level.
Write an algorithm to find the total number of players who will clear that level of the game.
 

Example

Input
5 15 5 3 7 9 135 90

Output
4

Explanation
Scores 15, 5, 3, 9 can be multiplied by another number to equal 135 and 90 which will break the pillar. So, the output is 4.


*/

#include<iostream>

int findWinningPlayers(int scores[], int numberOfPlayers, int healthOne, int healthTwo)
{
    int countOfPlayers = 0;
    for (int iterator = 0; iterator < numberOfPlayers; iterator++)
    {
        if ((healthOne % scores[iterator] == 0) && (healthTwo % scores[iterator] == 0))
        {
            countOfPlayers++;
        }
    }

    return countOfPlayers;
}

int main()
{
    int numberOfPlayers;        //5
    std::cin>>numberOfPlayers;

    int scores[numberOfPlayers]; // 15 5 3 7 9
    for (int iterator = 0; iterator < numberOfPlayers; iterator++)
    {
        std::cin>>scores[iterator];
    }

    int pillarHealthOne, pillarHealthTwo;
    std::cin>> pillarHealthOne >> pillarHealthTwo;

    int expectedNumberOfPlayers = findWinningPlayers(scores, numberOfPlayers, pillarHealthOne, pillarHealthTwo);

    std::cout<<"Number of winning players is " << expectedNumberOfPlayers;

    return 0;
}