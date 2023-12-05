#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include "functions.h"
using namespace std;

int main()
{
    int choice;
    while (true)
    {
        cout << "Choices of the tasks that you want to perform\n";

        cout << "1.Add new Student to the database\n";

        cout << "2. Search Student by Roll Number\n";

        cout << "3. Search Student by First Name\n";

        cout << "4. Search Student by Course Id\n";

        cout << "5. Count Total number of Students\n";

        cout << "6. Delete the Student by Roll Number\n";

        cout << "7. Update Student Details by Roll Number\n";

        cout << "8. Exit the program\n";

        cout << "Enter your choice\n";
        if (!(cin >> choice))
        {
            cerr << "Invalid input. Please enter a number.\n";
            cin.clear();                                         // Clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            continue;
        }

        switch (choice)
        {
        case 1:
            addStudentDetails();
            break;

        case 2:
            findStudentByRollNumber();
            break;

        case 3:
            findStudentByFirstName();
            break;

        case 4:
            findStudentByCourseId();
            break;

        case 5:
            findTotalStudents();
            break;

        case 6:
            deleteStudentByRollNumber();
            break;

        case 7:
            updateStudentDetails();
            break;

        case 8:
            exit(0);
            break;

        default:
            cerr << "Invalid choice. Please enter a number between 1 and 8.\n";
            break;
        }
    }

    return 0;
}
