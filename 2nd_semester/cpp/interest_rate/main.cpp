#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::fixed;
using std::setprecision;

double calcInterest(double principal, double duration, double rate)
{

    return (principal * duration * rate) / 100;
}

int main()
{
    double principal, duration, rate;

    cout << "\n\n=======================================================\n";
    cout << "           SIMPLE INTEREST RATE CALCULATOR          \n";
    cout << "=======================================================\n\n";

    do
    {
        cout << "Enter Principal Amount (positive value): ";
        cin >> principal;

        if (principal <= 0)
        {
            cout << "Error: Principal must be a positive value. Try again.\n";
        }

    } while (principal <= 0);

    do
    {
        cout << "Enter Duration Amount (in years, positive value): ";
        cin >> duration;

        if (duration <= 0)
        {
            cout << "Error: Duration must be a positive value. Try again.\n";
        }

    } while (duration <= 0);

    do
    {
        cout << "Enter Rate Amount (positive value): ";
        cin >> rate;

        if (rate <= 0)
        {
            cout << "Error: Rate must be a positive value. Try again.\n";
        }

    } while (rate <= 0);

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