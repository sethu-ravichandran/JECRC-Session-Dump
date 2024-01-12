/**
 * An online book reading community's grid displays books in a specific format. Only one batch of books is displayed at a time and each batch of books is recognized as a string tagged a-z. Each character of the string denotes the initials of the book's author. The community has decided to change the format of the display grid but before they can do this, they need to know the number of unique author's initials present in the given batch of books. The unique author's initials are the initials that appear only once in the batch of books represented as a string.

Write an algorithm to help the community find the count of unique author's initials present in the given batch of books. Note The batch of books contains only the lowercase letters as the author name initial.
 
Example

Input
asfddagha
Output
4

Explanation
There are 4 unique characters (s, f, g, h) present in the string. Hence the output is 4

*/


#include<iostream>
using namespace std;

int findUniqueInitials(string books)    // asfddagha
{
    int characterCounter[26] = {0};
    int uniqueInitialsCount = 0;

    for (int iterator = 0; iterator < books.size() ; iterator++)
    {
        characterCounter[books[iterator] - 'a']++;
    }

    for (int iterator = 0; iterator<26; iterator++)
    {
        if (characterCounter[iterator] == 1)
        {
            uniqueInitialsCount++;
        }
    }

    return uniqueInitialsCount;
}

int main()
{
    string books;
    cin>>books;
    int uniqueInitialsCount = findUniqueInitials(books);
    cout << uniqueInitialsCount;
    return 0;
}