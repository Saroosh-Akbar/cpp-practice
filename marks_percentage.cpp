#include <iostream>
using namespace std;

int main()
{
    float english, math, physics, chemistry, computer;
    float obtainedMarks, percentage;

    cout << "Enter English Marks: ";
    cin >> english;

    cout << "Enter Math Marks: ";
    cin >> math;

    cout << "Enter Physics Marks: ";
    cin >> physics;

    cout << "Enter Chemistry Marks: ";
    cin >> chemistry;

    cout << "Enter Computer Marks: ";
    cin >> computer;

    obtainedMarks = english + math + physics + chemistry + computer;
    percentage = (obtainedMarks / 500) * 100;

    cout << "\nObtained Marks = " << obtainedMarks << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}