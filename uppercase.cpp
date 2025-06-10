#include <iostream>
using namespace std;
int main()
{
    char in;
    cout<<"enter a character";
    cin>>in;
    if (in>='a'  &&  in<='z') cout<<"lc";
    else if (in>='A'   &&   in<='Z')   cout<<"uc";
    else cout<<"symbol";
}