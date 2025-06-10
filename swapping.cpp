#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int option;
    cout<<"enter option 1.for two variables 2.for three variables";
    cin>>option;
    if(option==1)
    {
        int a=10;
        int b=20;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<a<<b;

    }
    else if(option==2)
    {
        int a=10;
        int b=20;
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<a<<b;
    }
    else{
        cout<<"ii";
    }
    
}