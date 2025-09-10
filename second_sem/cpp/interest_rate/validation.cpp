#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;
using std::string;

double calcInterest(double principal, double duration, double rate)
{

    return (principal * duration * rate) / 100;
}

double getPositiveInput(const string &prompt)
{

    double value;

    do
    {
        cout << prompt;
        cin >> value;

        if (value <= 0)
        {
            cout << "Error: Please enter a positive number.\n";
        }
        {
            /* code */
        }

    } while (value <= 0);

    return value;
}

int main()
{
    cout << "\n\n=======================================================\n";
    cout << "           SIMPLE INTEREST RATE CALCULATOR          \n";
    cout << "=======================================================\n\n";

    double principal = getPositiveInput("Enter Principal Amount (positive value): ");
    double duration = getPositiveInput("Enter Duration Amount (in years, positive value): ");
    double rate = getPositiveInput("Enter Rate Amount (positive value): ");

    double interest = calcInterest(principal, duration, rate);
    double totalAmount = principal + interest;

    cout << "\n\n=======================================================\n\n";
    cout << fixed << setprecision(2);
    cout << "Principal Amount: GHc " << principal << "\n";
    cout << "Duration: " << duration << " years\n";
    cout << "Interest Rate: " << rate << "%\n";
    cout << "Interest: GHc " << interest << "\n";
    cout << "Total Amount: GHc " << totalAmount << "\n\n";
    cout << "=======================================================\n\n";

    return 0;
}