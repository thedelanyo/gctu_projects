#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::getline;
using string_t = std::string;

int main()
{

     string_t sentence;
     int count = 0;

     cout << "\n\n------- WORD COUNTER -------\n\n";

     cout << "Enter a sentence:\n";
     getline(cin, sentence);

     for (char c : sentence)
     {
          count += (c == ' ');
     }

     int words = sentence.empty() ? 0 : count + 1;

     cout << "\n\nTotal words in this sentence is: " << words << "\n\n";

     return 0;
}