#include <iostream>

using std::cin;
using std::cout;

int main()
{

    double length, width;

    cout << "\nEnter length of the rectangle: ";
    cin >> length;

    cout << "\nEnter width of the rectangle: ";
    cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << "\nArea = " << length << " * " << width << " = " << area;
    cout << "\nPerimeter = 2 * (" << length << " + " << width << ") = "
         << perimeter << "\n\n";

    return 0;
}