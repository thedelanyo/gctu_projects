#include <iostream>

int main()
{
    using std::cin;
    using std::cout;

    double first_val, second_val, third_val, fourth_val;
    double sum, product, average;

    cout << "Sum, Product and Average Calculator.";

    cout << "\n\nEnter the first number: ";
    cin >> first_val;

    cout << "\nEnter the second number: ";
    cin >> second_val;

    cout << "\nEnter the third number: ";
    cin >> third_val;

    cout << "\nEnter the fourth numbers: ";
    cin >> fourth_val;

    sum = first_val + second_val + third_val + fourth_val;
    product = first_val * second_val * third_val * fourth_val;
    average = sum / 3;

    cout << "\n\nThe sum is: " << sum;
    cout << "\nThe product is: " << product;
    cout << "\nThe average is: " << average;

    return 0;
}
