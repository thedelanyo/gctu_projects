#include <iostream>

using std::cin;
using std::cout;
using std::string;

int getPosition(double gpa)
{

    if (gpa >= 3.6)
        return 1;

    if (gpa >= 3.0)
        return 2;

    if (gpa >= 2.5)
        return 3;

    if (gpa >= 2.0)
        return 4;

    if (gpa >= 1.0)
        return 5;

    return 6;
};

string getGrade(int position)
{

    switch (position)
    {
    case 1:
        return "First Class";

    case 2:
        return "Second Class Upper";

    case 3:
        return "Second Class Lower";

    case 4:
        return "Third Class";

    case 5:
        return "Pass";

    case 6:
        return "Fail";

    default:
        return "Invalid gpa";
    }
};

int main()
{

    double gpa;

    cout << "\n\n========== STUDENT GPA GRADING SYSTEM ==========\n\n";

    cout << "Please enter your gpa: ";
    cin >> gpa;

    if (gpa < 0 || gpa > 4)
    {

        cout << "\n\nInvalid gpa! Should be between 0.0 and 4.0\n\n";

        return 1;
    };

    int position = getPosition(gpa);
    string grade = getGrade(position);

    cout << "\n\nYour grade is: " << grade << "\n\n";

    return 0;
}