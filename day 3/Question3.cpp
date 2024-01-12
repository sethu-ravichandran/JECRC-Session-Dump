/**
 * The new bank, "YoursPay", has a list of N customers' bank account balances. The list consists of both positive and negative balances. The positive balance signifies the current year's customers and the negative balance signifies last year's customers. The bank has decided to offer shortlisted customers credit scores to their credit cards. The credit score will be the sum of the two balances from the list with the smallest product when multiplied. If the credit score is positive then the credit will be provided to the current year's customer, otherwise, it will go to the last year's customer.

Write an algorithm to find the credit score.
 

Example

Input
5
5 1 8 -5 7 5
Output
3

*/

#include<iostream>
using namespace std;

int calculateCreditScore(int numberOfCustomers, int balances[])
{
    int minimumProduct = INT_MAX, creditScore = 0;

    for (int iterator=0; iterator < numberOfCustomers; iterator++)
    {
        for (int jterator = iterator+1; jterator < numberOfCustomers; jterator++)
        {
            int product = balances[iterator] * balances[jterator];
            if (product < minimumProduct)
            {
                minimumProduct = product;
                creditScore = balances[iterator] + balances[jterator];
            }
        }
    }

    return creditScore;
}

int main()
{
    int numberOfCustomers;
    cin >> numberOfCustomers;

    int balances[numberOfCustomers];
    for (int iterator = 0; iterator < numberOfCustomers; iterator++)
    {
        cin >> balances[iterator];
    }

    int creditScore = calculateCreditScore(numberOfCustomers, balances);
    cout << creditScore << endl;

    return 0;
}