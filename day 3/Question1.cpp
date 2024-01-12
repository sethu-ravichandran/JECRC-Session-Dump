/**
 * A company transfers an encrypted code to one of its clients. The code needs to be decrypted so that it can be used for accessing all the required information. The code can be decrypted by interchanging each consecutive digit and once a digit has been interchanged then it cannot be used again. If at a certain point there are no digits to be interchanged with, then that single digit must be left as it is.
write an algorithm to decrypt the code so that it can be used to access the required information.
Example

Input
39631

Output
93361

Explanation
Step 1 - Interchange the first two digits, 3 and 9, which forms 93631
Step 2 - Interchange the third and fourth digits, 6 and 3, which form 93361. Step 3 - For the fifth digit as there is no digit to be interchanged with, it is left as it is so it will be kept as 93361. So, the output is 93361

*/

#include<iostream>
using namespace std;

string decrypt(string encryptedCode)
{
    string decryptedCode = encryptedCode;
    for (int iterator = 0; iterator < decryptedCode.size(); iterator += 2)
    {
        if (iterator + 1 < decryptedCode.size())
        {
            swap(decryptedCode[iterator], decryptedCode[iterator+1]);
        }
    }
    
    return decryptedCode;
}

int main()
{
    string encryptedCode;
    cin >> encryptedCode;
    string decryptedCode = decrypt(encryptedCode);
    cout << decryptedCode << endl;
    return 0;
}