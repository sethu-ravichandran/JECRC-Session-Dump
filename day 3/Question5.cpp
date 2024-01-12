/**
 * SecretMessage agency provides message encoding and decoding services for secure data transfer. The first step in decoding includes the removal of special characters from the message, as special characters and whitespaces do not hold any meaning. Write an algorithm to help the agency find the number of special characters in a given message.
 



Example 

Input
gasg!g54@#vscsdls*

Output
4

Explanation
The special characters having no meaning are ['@', '#', '!', '*'].

*/

#include<iostream>
using namespace std;

int countSpecialCharacters(string inputMessage)
{
    int expectedCount = 0;

    for(int iterator = 0; iterator < inputMessage.size(); iterator++)
    {
        char character = inputMessage[iterator];

        if (!isalnum(character) && !isspace(character))
        {
            expectedCount++;
        }
    }

    return expectedCount;

}

int main()
{
    string inputMessage;
    cin >> inputMessage;

    int countOfSpecialCharacters = countSpecialCharacters(inputMessage);
    cout << countOfSpecialCharacters << endl;
    return 0;
}