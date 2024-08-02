#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number : ";
    cin>>num;

    if(num<0)
    cout<<num<<" is negative.";
    else if(num>0)
    cout<<num<<" is positive.";
    else
    cout<<"It's a zero";
}