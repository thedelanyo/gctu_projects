#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::to_string;
using string_t = std::string;

int main()
{

     int number;
     string_t message;

     cout << "\n\n------- POSITIVE NUMBER ZERO INCLUSIVE -------\n\n";

     cout << "Enter a number:\n";
     cin >> number;

     if (number >= 0)
     {
          message = to_string(number) + " is a positive number.";
     }
     else
     {
          message = to_string(number) + " is a negative number.";
     }

     cout << "\n\n"
          << message << "\n\n";

     return 0;
}