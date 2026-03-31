#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int numStudents;
    double score1, score2;
    string stuName;
    ofstream file;

    // Open "students.txt" for writing
    file.open("Students.txt");

    // Check if file opened successfully; print error and exit if not
        if (!file.is_open())
        {
            cerr << "Error: Could not open file for writing." << endl;
            return 1; // Exit with an error code
        }
        

    // Read numStudents from cin, write numStudents to file
    cout << "Enter the total number of students:";
    cin >> numStudents;
    file << numStudents << endl;

    // Read stuName, score1, score2 from cin; write them to file
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Enter the student name and two scores: ";
        cin >> stuName >> score1 >> score2;
        file << stuName << " " << score1 << " " << score2 << endl;
    }
    // Close file
    file.close();
    return 0;
}
