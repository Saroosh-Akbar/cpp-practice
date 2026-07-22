#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1;
    int next;
    int n,i;
    cout<<"Enter how many terms:"<<endl;
    cin>>n;
    cout<<a<<""<<b<<"";
    for(i=1;i<=n;i++)
    {
        next=a+b;
        cout<<next<<"";
        a=b;
        b=next;
    }
    return 0;
}