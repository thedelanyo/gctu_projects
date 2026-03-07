#include <iostream>
#include <string>

using namespace std;

int main()
{

    string first_name;
    string other_names;
    string last_name;

    cout << "Enter your first name: ";
    cin >> first_name;

    cout << "\nEnter your last name: ";
    cin >> last_name;
    cin.ignore();

    cout << "\nEnter your other names: ";
    getline(cin, other_names);

    cout << first_name + " " + other_names + " " + last_name;

    return 0;
}