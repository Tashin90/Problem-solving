#include <iostream>
using namespace std;


double calculateGPA(double mark) {
    if (mark >= 90 && mark <= 100) {
        return 4.00;
    } else if (mark >= 85 && mark < 90) {
        return 3.75;
    } else if (mark >= 80 && mark < 85) {
        return 3.50;
    } else if (mark >= 75 && mark < 80) {
        return 3.25;
    } else if (mark >= 70 && mark < 75) {
        return 3.00;
    } else if (mark >= 65 && mark < 70) {
        return 2.75;
    } else if (mark >= 60 && mark < 65) {
        return 2.50;
    } else if (mark >= 50 && mark < 60) {
        return 2.25;
    } else {
        return 0.00;
    }
}

int main() {
    double mark1, mark2, mark3, mark4, mark5;
    double gpa1, gpa2, gpa3, gpa4, gpa5;
    double totalGPA, cgpa;


    cout << "Enter marks of your 5 courses:" << endl;
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;


    gpa1 = calculateGPA(mark1);
    gpa2 = calculateGPA(mark2);
    gpa3 = calculateGPA(mark3);
    gpa4 = calculateGPA(mark4);
    gpa5 = calculateGPA(mark5);


    cout << "Grades for each course: " << endl;
    cout << "Course 1: ";
    if (mark1 >= 0 && mark1 <= 100) {
        if (mark1 >= 50) {
            cout << "Pass";
        } else {
            cout << "Fail";
        }
        cout << " (GPA: " << gpa1 << ")" << endl;
    } else {
        cout << "Invalid mark" << endl;
    }

    cout << "Course 2: ";
    if (mark2 >= 0 && mark2 <= 100) {
        if (mark2 >= 50) {
            cout << "Pass";
        } else {
            cout << "Fail";
        }
        cout << " (GPA: " << gpa2 << ")" << endl;
    } else {
        cout << "Invalid mark" << endl;
    }

    cout << "Course 3: ";
    if (mark3 >= 0 && mark3 <= 100) {
        if (mark3 >= 50) {
            cout << "Pass";
        } else {
            cout << "Fail";
        }
        cout << " (GPA: " << gpa3 << ")" << endl;
    } else {
        cout << "Invalid mark" << endl;
    }

    cout << "Course 4: ";
    if (mark4 >= 0 && mark4 <= 100) {
        if (mark4 >= 50) {
            cout << "Pass";
        } else {
            cout << "Fail";
        }
        cout << " (GPA: " << gpa4 << ")" << endl;
    } else {
        cout << "Invalid mark" << endl;
    }

    cout << "Course 5: ";
    if (mark5 >= 0 && mark5 <= 100) {
        if (mark5 >= 50) {
            cout << "Pass";
        } else {
            cout << "Fail";
        }
        cout << " (GPA: " << gpa5 << ")" << endl;
    } else {
        cout << "Invalid mark" << endl;
    }

    // Calculating CGpa
    totalGPA = gpa1 + gpa2 + gpa3 + gpa4 + gpa5;
    cgpa = totalGPA / 5.0;

    cout << "Your CGPA: " << cgpa << endl;

    return 0;
}


