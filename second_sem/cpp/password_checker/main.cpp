#include <iostream>

using std::cin;
using std::cout;
using string_t = std::string;

int main()
{
     string_t password;
     const string_t SUB_STRING = "GCTU";
     const int MIN_LENGTH = 8;

     cout << "\n\n------- PASSWORD CHECKER -------\n\n";

     cout << "Enter a strong password. It must include the word, "
          << SUB_STRING << " and minimum length is "
          << MIN_LENGTH << " characters:\n";

     cin >> password;

     const bool IS_VALID = password.length() >= MIN_LENGTH && password.find(SUB_STRING) != string_t::npos;

     cout << "\n\n"
          << (IS_VALID ? "Success! Valid password." : "Invalid password. Must include GCTU and a min of 8 chars.")
          << "\n\n";

     return 0;
}