#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    // for(int i=0 ; i<n ; i++)
    // cout<<" * ";

    int i=0;
    while(i<n)
    {
        cout<<" * ";
        i++;
    }

    cout<<endl;
}