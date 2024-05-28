/**
 * Write a program that reads the grades of different exams for 5 students. Determine:
 * 1. Students that have approved all the exams
 * 2. Students that have approved at least one exam
 * 3. Students that only approved the last exam
 */

#include <iostream>

using namespace std;

int main()
{
    int all = 0, atLeastOne = 0, onlyLast = 0, gradeA, gradeB, gradeC, approvedThreshold = 5;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Grades for student #" << i << "> ";
        cin >> gradeA >> gradeB >>  gradeC; 

        if (gradeA >= approvedThreshold && gradeB >= approvedThreshold && gradeC >= approvedThreshold)
        {
            all++;
        }

        if (gradeA >= approvedThreshold || gradeB >= approvedThreshold || gradeC >= approvedThreshold)
        {
            atLeastOne++;
        }

        if (gradeC >= approvedThreshold && gradeA < approvedThreshold && gradeB < approvedThreshold)
        {
            onlyLast++;
        }
    }

    cout << "Approved all the exams: " << all << endl;
    cout << "Approved at least one exam: " << atLeastOne << endl;
    cout << "Approved only the last exam: " << onlyLast << endl;

    return 0;
}