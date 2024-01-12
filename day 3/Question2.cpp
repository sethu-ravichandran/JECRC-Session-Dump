/**
 * In a gray code sequence, two successive terms differ in only one bit. Write an algorithm to find out if the binary representation of two given positive integers can be placed successively in a gray code sequence.


Example

Input
119
117
Output
1

Explanation
The binary representation of 119 is 1110111.
The binary representation of 117 is 1110101.
Both binary representations differ by 1 bit only which is at the second place from the right.
Thus, these numbers can be placed successively in a gray code sequence.
So, the output is 1.

*/

#include <iostream>
using namespace std;

bool findGrayCode(int inputOne, int inputTwo)
{
    int xorValue = inputOne ^ inputTwo; // 00100010
    int countOfUnlikeBits = 0;

    while (xorValue > 0)
    {
        countOfUnlikeBits += xorValue & 1;
        xorValue >>= 1;
    }

    // if (countOfUnlikeBits == 1)
    // {
    //     return true;
    // }

    // return false;

    return countOfUnlikeBits == 1;
}

int main()
{
    int inputOne, inputTwo;
    cin >> inputOne >> inputTwo;
    bool isGrayCode = findGrayCode(inputOne, inputTwo);
    cout << isGrayCode << endl;
    return 0;
}