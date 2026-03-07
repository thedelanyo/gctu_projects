#include <iostream>

int main()
{
    double first, second, result;
    char operate;

    std::cout << "Enter your first number: ";
    std::cin >> first;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operate;

    std::cout << "Enter your second number: ";
    std::cin >> second;

    switch (operate)
    {
    case '+':
        result = first + second;
        break;

    case '-':
        result = first - second;
        break;

    case '*':
        result = first * second;
        break;

    case '/':
        result = first / second;
        return 1;

    default:
        std::cout << "Invalid operator";
    }

    std::cout << first << " " << operate << " " << second << " = " << result << std::endl;

    return 0;
}