include<iostream>
using namespace std;
int main()
{
    int pin;
    cout<<"Enter PIN";
    cin>>pin;
    if(pin=1234)
    {
        if(balance>100)
        {
            cout<<"Transaction Allowed"<<endl;
        }
        else
        {
            cout<<"Insufficient Balance"<<endl;
        }
    }
    else
    {
cout<<"Invalid Pin"<<endl;
    }
    return 0;
}
