/**
 * The apparel company 'FeelGood' has collected a list of the sales values of the N highest selling brands of products during the festive season. Each brand is identified by a unique ID numbered 0 - (N-1) in the list. From this list, the company wishes to determine the Kth largest sales value for a given day.

Write an algorithm to help the company determine the sales value of the Kth largest selling product.
 

Example

Input
5 3
45 32 67 21 12

Output
32

Explanation
The third-largest element in the array is 32. Hence the output is 32.

*/

#include<iostream>
using namespace std;

int findKthNumber(int salesData[], int numberOfBrands, int kthNumber)
{
    for (int iterator = 0; iterator < numberOfBrands - 1; iterator++)
    {
        for (int jterator = 0; jterator < numberOfBrands - iterator - 1; jterator++)
        {
            if (salesData[jterator] < salesData[jterator+1])
            {
                swap(salesData[jterator],salesData[jterator+1]);
            }
        }
    }

    return salesData[kthNumber - 1];
}

int main()
{
    int numberOfBrands, kthNumber;
    cin >> numberOfBrands >> kthNumber;

    int salesData[numberOfBrands];
    for (int iterator = 0; iterator < numberOfBrands; iterator++)
    {
        cin >> salesData[iterator];
    }

    int valueOfKthNumber = findKthNumber(salesData, numberOfBrands, kthNumber);
    cout << valueOfKthNumber;

    return 0;
}