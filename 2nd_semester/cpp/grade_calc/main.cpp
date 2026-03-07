#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::string;

string getGrade(double avarage)
{

    if (avarage > 90)
    {
        return "A1";
    }
    else if (avarage > 80)
    {
        return "A2";
    }
    else if (avarage > 70)
    {
        return "B1";
    }
    else if (avarage > 60)
    {
        return "B2";
    }
    else if (avarage > 50)
    {
        return "C1";
    }
    else if (avarage > 40)
    {
        return "C2";
    }
    else if (avarage > 32)
    {
        return "D";
    }
    else if (avarage > 20)
    {
        return "E1";
    }

    return "E2";
};

int main()
{

    const int NUM_SUBJECTS = 5;

    double marks[NUM_SUBJECTS];
    double total = 0.0;
    double avarage;

    cout << "\n\n=======================================================\n";
    cout << "                STUDENT GRADING SYSTEM                   \n";
    cout << "=======================================================\n\n";

    cout << "Please enter marks for " << NUM_SUBJECTS << " subjects (0-100)\n\n";

    for (int i = 0; i < NUM_SUBJECTS; i++)
    {
        do
        {
            cout << "Enter mark for subject " << (i + 1) << ": ";
            cin >> marks[i];

            if (marks[i] < 0 || marks[i] > 100)
            {
                cout << "Invalid input! Please enter a mark between 0 and 100.\n";
            }

        } while (marks[i] < 0 || marks[i] > 100);

        total += marks[i];
    }

    avarage = total / NUM_SUBJECTS;

    string grade = getGrade(avarage);

    cout << "\n\n=========  RESULTS   ==============\n\n";
    cout << "Total marks: " << total << " / " << (NUM_SUBJECTS * 100) << "\n";
    cout << "Avarage: " << avarage << "%" << "\n";
    cout << "Grade: " << grade << "\n";

    return 0;
}