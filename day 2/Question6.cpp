/**
 * The online math course provided 'MathAtTip' has designed a course for children called Learning Number Recognition and Counting. The assessment part of the course has a question where the student is given a number and a digit. The student needs to find out the total count of the digits present in the number excluding the given digit.

Write an algorithm to help the student find out the count of the total number of digits present in the number excluding the given digit.
 

Example:

Input :
5644456
5
Output :
5
Explanation
Excluding 5: the digits in the numbers are 4 and 6 and their total count is 5. Hence the output is 5

*/

#include<iostream>
using namespace std;

int count(string number, int ignoredDigit)        //67834582, 8 => 8-2 = 6
{
    int expectedCount = 0;

    for (int iterator = 0; iterator < number.size(); iterator++)
    {
        int digit = number[iterator] - '0'; // '6' => 6
        if (digit != ignoredDigit)
        {
            expectedCount++;
        }
    }
    return expectedCount;
}

int main()
{
    string number;
    int digit;
    cin >> number >> digit;
    int countOfOtherNumbers = count(number, digit);
    cout << countOfOtherNumbers;
    return 0;
}