#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter Your Marks:"<<endl;
    cin>>marks;
    if(marks>=50)
    {
        if(marks>=80)
        {
            cout<<"Passed with A Grade."<<endl;
        }
        else
       {
         cout<<"Passed."<<endl;
       }
    }
    else
    {
    cout<<"Failed."<<endl;
    }
    return 0;
}
