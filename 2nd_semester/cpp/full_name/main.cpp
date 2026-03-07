#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{

    string first_name;
    string last_name;
    string other_name;

    cout << "\n\n------- FULL NAME MAKER -------\n\n";

    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "\nEnter your last name: ";
    cin >> last_name;
    cin.ignore();

    cout << "\nEnter your other names: ";
    getline(cin, other_name);

    string full_name = first_name + ", " + last_name + " " + other_name;

    cout << "\nHello, " << full_name << "!" << "\n\n";

    return 0;
}
