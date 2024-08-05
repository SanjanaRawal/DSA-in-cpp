#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    
    for(int i=n ; i<=1 ; i--)
    {
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
    }
}