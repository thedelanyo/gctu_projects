#include <iostream>

// Calculates the factorial of a number
int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }

    return num * factorial(num - 1);
}

int main()
{
    int num;

    std::cout << "Enter a non-negative integer: ";
    std::cin >> num;

    if (num < 0)
    {
        std::cout << "Invalid input. Enter a non-negative integer: ";
        std::cin >> num;
    }
    else
    {
        int fact = factorial(num);
        std::cout << "The factorial of " << num << " is: " << fact << std::endl;
    }

    return 0;
}