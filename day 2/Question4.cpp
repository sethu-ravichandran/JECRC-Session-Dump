/**
 * A company provides data encryption to its client's data. The data sent over the network is in the form of a string. The encryption algorithm used by the company adds a key value in the ascii value of each character of the data string and forms the encrypted string. This string isa then sent over the network to provide security. Write an algorithm to find the encrypted data string

Note
The dataStr can contain lowercase and uppercase English letters (i.3 a-z, A-Z), digits (i.e. 0 - 9), and any special symbols.

//ASCII code /values

A = 65, B 66, C 67 .... 
a = 97, b 98, c 99, ...
 

Example 

Input
3
as3gAsd

97 + 3 = 
dv6jDvg

Output
dv6jDvg

Explanation
After adding 3 in the ascii value of the characters in the data string, the encrypted string becomes - dv6jDvg

*/

#include<iostream>
using namespace std;

string encryptString(string userString, int key) //as3gAsd,3
{
    string encryptedString = "";

    for (int iterator = 0; iterator < userString.length(); iterator++)
    {
        char character = userString[iterator]; //a

        if (isalpha(character))
        {
            if (isupper(character))
            {
                encryptedString += (character + key - 'A') % 26 + 'A';                  //character+key
            }
            else
            {
                encryptedString += (character + key - 'a') % 26 + 'a';
            }
        }
        else
        {
            encryptedString += (character + key);
        }
    }

    return encryptedString;
}

int main()
{
    int key;
    string userString;

    cin >> key; // 3
    cin >> userString; //

    string encryptedString = encryptString(userString, key);
    cout << encryptedString;

    return 0;
}