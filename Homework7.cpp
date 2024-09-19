#include <iostream>
using namespace std;

int main() {
    int totalClasses, attendedClasses;


    cout << "Enter the total number of classes held: ";
    cin >> totalClasses;
    cout << "Enter the number of classes attended: ";
    cin >> attendedClasses;


    double attendancePercentage = (double(attendedClasses) / totalClasses) * 100;


    if (attendancePercentage >= 80) {
        cout << "Your attendance percentage is " << attendancePercentage <<  "%. You are allowed to sit for the exam." << endl;
    } else {
        cout << "Your attendance percentage is " << attendancePercentage <<  "%. You are not allowed to sit for the exam." << endl;
    }

    return 0;
}
