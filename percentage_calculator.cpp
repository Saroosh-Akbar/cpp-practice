#include <iostream>
using namespace std;

int main()
{
    float obtainedMarks, totalMarks, percentage;

    cout << "Enter Obtained Marks: ";
    cin >> obtainedMarks;

    cout << "Enter Total Marks: ";
    cin >> totalMarks;

    percentage = (obtainedMarks / totalMarks) * 100;

    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}