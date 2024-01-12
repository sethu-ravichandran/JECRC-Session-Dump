#include<iostream>

void convertToBinary(int number)
{
    int binaryNumber[32];

    int iterator = 0;

    while (number > 0)
    {
        binaryNumber[iterator] = number%2;
        number = number/2;
        iterator++;
    }

    for (int jterator = iterator-1; jterator >=0; jterator--)
    {
        std::cout<<binaryNumber[jterator];
    }
}

int main()
{
    int decimalNumber = 213;
    convertToBinary(decimalNumber);
    return 0;
}