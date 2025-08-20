#include <iostream>

using std::cin;
using std::cout;

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

    cout << "\n\n=====      FACTORIAL       =====\n\n";

    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Invalid input. Enter a non-negative integer: ";
        cin >> num;
    }
    else
    {
        int fact = factorial(num);
        cout << "\n\nThe factorial of " << num << " is: " << fact << "\n\n";
    }

    return 0;
}