#include<iostream>
using namespace std;
int main()
{
    char menue;
    cout<<"give your order (a-c)";
    cin>>menue;
    switch(menue)
    {
        case 'a':
        cout<<"Tea";
        break;
        case 'b':
        cout<<"Coffee";
        break;
        case 'c':
        cout<<"Juice";
        break;
        default:
        cout<<"Not in the menue";
    }
    return 0;
}