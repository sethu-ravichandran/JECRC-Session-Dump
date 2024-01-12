/**
 * "VideoShare" is an online video-sharing platform. The company has decided to rate its user's channels based on the sum total of the
 * number of views received online and the subscribers. This sum total is referred to as User Points. The rating will be given according
 * to the below charts: User Points Rating
 * 
 * 30 - 50 Average
 * 51 - 60 Good
 * 61 - 80 Excellent
 * 81 - 100 Outstanding
 * 
 * The whole process is
 * automated and is carried out by the company's system.

Write an algorithm to find the rating of the given user's channel based on the user points.
 

Example:

Input
77
Output
Excellent

Explanation
77 lies in the range 61-80, so the rating is 'Excellent'.

*/

#include <iostream>

std::string calculateRating(int userPoints)
{
    if (userPoints >= 30 && userPoints <= 50)
    {
        return "Average";
    }
    else if (userPoints >= 51 && userPoints <= 60)
    {
        return "Good";
    }
    else if (userPoints >= 61 && userPoints <= 80)
    {
        return "Excellent";
    }
    else if (userPoints >= 81 && userPoints <= 100)
    {
        return "Outstanding";
    }
    else
    {
        return "Invalid";
    }
}

int main()
{
    int userPoints;
    std::cin>> userPoints;
    std::string userRating = calculateRating(userPoints);
    std::cout<<"User rating is " << userRating << std::endl;
    return 0;
}