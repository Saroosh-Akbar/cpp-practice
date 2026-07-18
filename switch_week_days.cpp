#include<iostream>
using namespace std;
int main()
{
    int choice;
    cout<<"Enter a number(1-7)";
    cin>>choice;

    switch(choice)
    {
        case1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Invalid Message";
    }
    return 0;
}