#include <iostream>

using std::cin;
using std::cout;
using std::string;

string getLabel(int index)
{

    switch (index)
    {
    case 0:
        return "First";

    case 1:
        return "Second";

    case 2:
        return "Third";

    case 3:
        return "Fourth";

    case 4:
        return "Firth";

    default:
        return "Last";
    }
};

void displayMarks(int marks[], int size)
{
    cout << "\n\nMarks of 5 students\n";
    cout << "=======================\n";
    for (int i = 0; i < size; i++)
    {
        cout << getLabel(i) << " Student" << ": " << marks[i] << " marks\n";
    };
};

int main()
{
    const int TOTAL_STUDENTS = 5;
    int marks[TOTAL_STUDENTS];

    cout << "\n\n========== STUDENT DISPLAY PROGRAM ==========\n\n";

    cout << "Enter marks of 5 students:\n";
    for (int i = 0; i < TOTAL_STUDENTS; i++)
    {
        cout << "Enter mark for " << getLabel(i) << " student" << ": ";
        cin >> marks[i];
    }

    displayMarks(marks, TOTAL_STUDENTS);

    return 0;
}