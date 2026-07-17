#include<iostream>
using namespace std;
int main()
{
    int marks,attend;
    cout<<"Enter student's marks:"<<endl;
    cin>>marks;
    cout<<"Enter student's attendance:"<<endl;
    cin>>attend;
    if(marks>=75)
    {
        if(attend>=50)
        {
            cout<<"Scholarship Approved."<<endl;
        }
        else
        {
            cout<<"Attendance is low."<<endl;
        }
    }
    else
    {
        cout<<"Not Eligible for this Scholarship."<<endl;

    }
    return 0;
}