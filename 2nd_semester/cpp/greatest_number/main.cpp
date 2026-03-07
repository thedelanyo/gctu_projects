#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int x, y, z;

    cout << "\n\n=====    To Determine Greatest Number     =====\n\n";

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    if (x >= y && x >= z)
    {
        cout << x << " is the greatest.";
    }
    else if (y >= x && y >= z)
    {
        cout << y << " is the greatest.";
    }
    else
    {
        cout << z << " is the greatest.";
    }

    cout << "\n\n";

    return 0;
}
