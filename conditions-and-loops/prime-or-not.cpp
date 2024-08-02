#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number to be checked : ";
    cin>>num;

    int count=0;

    int i=1;
    while(i<=num)
    {
        if (num%i==0)
        count++;

        i++;
    }

    if(count==2)
    cout<<"The entered number "<<num<<" is prime.";
    else
    cout<<"The entered number "<<num<<" isn't prime.";
}