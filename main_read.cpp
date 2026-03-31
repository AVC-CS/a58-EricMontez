#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int totalStudents;
    double score1, score2, sum, avg;
    string stuName;
    ifstream file;

    // Open "students.txt" for reading
    file.open("Students.txt");

    // Check if file opened successfully; print error and exit if not
        if (!file.is_open())
        {
            cerr << "Error: Could not open file for reading." << endl;
            return 1; // Exit with an error code
        }

    // Read totalStudents from file, print "Total M students"
    file >> totalStudents;
    cout << "Total " << totalStudents << " students" << endl;

    // Read contents from file, compute sum and avg, print results
    for (int i = 0; i < totalStudents; i++)
    {
        // Read stuName, score1, score2 from file; 
        file >> stuName >> score1 >> score2;
        // Compute sum = score1 + score2, avg = sum / 2.0
        sum = score1 + score2;
        avg = sum / 2.0;
        // Print Student Name, score1, score2, Sum, Avg
        cout << "Student Name: " << stuName << ". score1: " << score1 << ". score2: "  << score2 << ". Sum: " << sum << ". Avg: " << avg << endl;
    }
    // Close file
    file.close();
    return 0;
}
