/**
 * An e-commerce company wishes to bucketize its products. Each product has a product ID. The product ID is a numeric number. The company has to find the bucket ID from the product ID. The company needs an algorithm that takes the product ID as an input, calculates the smallest and largest permutation with the digits of the product ID, then outputs the sum of these smallest and largest permutations as the bucket ID. Write an algorithm for the company to find the bucket ID for the given product.
 

Example:

Input
734 // 347, 743

Output
1090

Explanation

The smallest permutation with digits 7, 3, 4 is 347 .The largest permutation with digits 7, 3, 4 is 743 The sum of 347+743 = 1090. So, the output is 1090.

*/

#include <iostream>
using namespace std;

int calculateBucketId(int productID)
{
    string productIDString = to_string(productID);

    //sort in ascending for the smallest permutation
    sort(productIDString.begin(), productIDString.end());
    int smallestPermutation = stoi(productIDString);

    //sort in descending for the largest permutation
    reverse(productIDString.begin(), productIDString.end());
    int largestPermutation = stoi(productIDString);

    return smallestPermutation + largestPermutation;

}

int main()
{
    int productID;
    cin >> productID;

    int bucketID = calculateBucketId(productID);
    cout << bucketID << endl;

    return 0;
}