#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

    cout << "\n\n=====  Average Marks Calculator.  =====\n\n";

    double first, second, third;
    double average;

    cout << "Enter mark for first student: ";
    cin >> first;

    cout << "\nEnter mark for second student: ";
    cin >> second;

    cout << "\nEnter mark for third student: ";
    cin >> third;

    average = (first + second + third) / 3;

    cout << "\n\nThe average of " << first << ", " << second << ", and " << third << " is: " << average;
    cout << "\n\n";

    return 0;
}
