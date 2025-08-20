#include <iostream>

using std::cin;
using std::cout;

int main()
{

    cout << "\n\n=====   Sum and Average Calculator.    =====\n\n";

    double a, b, c;
    double sum, average;

    cout << "\n\nEnter the three numbers: ";
    cin >> a >> b >> c;

    sum = a + b + c;
    average = sum / 3;

    cout << "\n\nThe sum of " << a << ", " << b << ", and " << c << " is: " << sum;
    cout << "\n\nThe average of " << a << ", " << b << ", and " << c << " is: " << average;
    cout << "\n\n";

    return 0;
}
