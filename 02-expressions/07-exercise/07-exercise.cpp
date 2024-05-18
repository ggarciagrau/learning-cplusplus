#include<iostream>

using namespace std;

int main () {

    float intershipGrade, examGrade, attitudeGrade, finalGrade;

    cout << "Intership grade> ";
    cin >> intershipGrade;

    cout << "Exam grade> ";
    cin >> examGrade;

    cout << "Attitude grade> ";
    cin >> attitudeGrade;

    intershipGrade *= 0.3;
    examGrade *= 0.6;
    attitudeGrade *= 0.1;
    finalGrade = intershipGrade + examGrade + attitudeGrade;
    // finalGrade = (intershipGrade * 0.3) + (examGrade * 0.6) + (attitudeGrade * 0.1);

    cout << "Final grade: " << finalGrade << endl;

    return 0;
}