#include <iostream>

using std::cin;
using std::cout;
using string_t = std::string;

int main()
{

     string_t first_name;
     string_t last_name;
     string_t full_name;

     cout << "\n\n------- FULL NAME MAKER -------\n\n";

     cout << "Enter your first name:\n";
     cin >> first_name;

     cout << "\n\nEnter your last name:\n";
     cin >> last_name;

     full_name = last_name + ", " + first_name;

     cout << "\n\nHello, " << full_name << "!" << "\n\n";

     return 0;
}