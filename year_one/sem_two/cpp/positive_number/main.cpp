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

     cout << "\n\n------- POSITIVE NUMBER -------\n\n";

     cout << "Enter a number:\n";
     cin >> number;

     if (number == 0)
     {
          message = "That's zero. Lol _:(.";
     }
     else if (number > 0)
     {
          message = to_string(number) + " is a positive.";
     }
     else
     {
          message = to_string(number) + " is a negative.";
     }

     cout << "\n\n"
          << message << "\n\n";

     return 0;
}