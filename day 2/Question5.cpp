/**
 * In a bank, there are two types of transactions: credit and debit. All transactions are assigned an alphabetical ID. Credit transactions are assigned a vowel and debit transactions are assigned a consonant. To track transactions over a year, all the transaction IDs are combined to form a string of IDs for each customer. A customer wishes to know the number of times he made a debit transaction immediately after a credit transaction. Write an algorithm to print the count of debit transactions that were made immediately after a credit transaction for that particular customer.
Note: The input string consists of English letters only. Vowels are 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' and all remaining letters are consonants. Both uppercase and lowercase letters can be used as a transaction ID. If no debit transactions were made immediately after a credit transaction, then the count should be 0.

Example

Input
OqPputLE

Output
2

Explanation

For the given string "OqPputLE", there are only two consonants that come after the vowel is q and t. So, the output is 2.

̦
*/

#include<iostream>
using namespace std;

int calculateDebitAfterCredit(string transactionID)
{
    int expectedCount = 0;

    for (int iterator = 0; iterator < transactionID.size() - 1; iterator++)
    {
        char currentTransaction = transactionID[iterator];
        char nextTransaction = transactionID[iterator+1];

        if ((currentTransaction == 'a' || currentTransaction == 'e' || currentTransaction == 'i' || currentTransaction == 'o' || currentTransaction == 'u'
        || currentTransaction == 'A' || currentTransaction == 'E' || currentTransaction == 'I' || currentTransaction == 'O' || currentTransaction == 'U') && 
        ((nextTransaction != 'a' && nextTransaction != 'e' && nextTransaction != 'i' && nextTransaction != 'o' && nextTransaction != 'u'
        && nextTransaction != 'A' && nextTransaction != 'E' && nextTransaction !='I' && nextTransaction != 'O' && nextTransaction != 'U')))
        {
            expectedCount++;
        }
    }

    return expectedCount;
}

int main()
{
    string transactionID;
    cin >> transactionID;

    int expectedTransactionCount = calculateDebitAfterCredit(transactionID);
    cout << expectedTransactionCount;

    return 0;
}