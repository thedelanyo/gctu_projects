#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::sqrt;

int main()
{

    cout << "\n\n-------    QUADRATIC EQUATION SOLVER   ------\n\n";

    double a, b, c;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;

    cout << "\n\n";

    if (a == 0)
    {
        cout << "Not a quadratic equation (a must not be zero)";
        return 0;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        // two real roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Two real roots: " << root1 << " and " << root2;
    }
    else if (discriminant == 0)
    {
        // one real root
        double root = -b / (2 * a);

        cout << "One real root: " << root;
    }
    else
    {
        // complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Complex roots: "
             << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i";
    }

    cout << "\n\n";

    return 0;
}
