/**
 * The e-commerce company "BuySellGoods" processes its customer orders through order id. The order id is generated automatically by their system with the help of the customer id. The order id can be a positive or a negative number. The negative order id denotes the canceled order by the customer. The company system takes the customer id as the first term and a common ration R. The order id is the Nth term in the geometric progression of the series. Write an algorithm to generate the customer's order id.
 



Example

Input
3 2 4

3, 6, 12, 24, 48, 96, 

Output
24

Explanation
The 4th term of the series is 24

*/

#include<iostream>
#include<cmath>

int generateOrderID(int customerID, int commonRatio, int term)
{
    int orderID = customerID * pow(commonRatio, term - 1);
    if (term % 2 == 0)
    {
        orderID = orderID * -1;
    }
    return orderID;
}

int main()
{
    int customerID, commonRatio, term;

    std::cin >> customerID >> commonRatio >> term;

    int orderID = generateOrderID(customerID, commonRatio, term);
    std::cout << orderID << std::endl;

    return 0;
}