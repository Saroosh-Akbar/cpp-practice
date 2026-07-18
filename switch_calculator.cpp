#include<iostream>
using namespace std;
int main()
{
    char choice;
    int num1,num2;
    cout<<"Enter First Number:"<<endl;
    cin>>num1;
    cout<<"Enter Second Number:"<<endl;
    cin>>num2;
    cout<<"Chose Operator(+,-,*,/)";
    cin>>choice;

    switch(choice)
    {
        case '+':
        cout<<num1+num2;
        break;
        case '-':
        cout<<num1-num2;
        break;
        case '*':
        cout<<num1*num2;
        break;
        case '/':
        cout<<num1/num2;
        break;
        default:
        cout<<"Invalid Operation";
    }
    return 0;
} 