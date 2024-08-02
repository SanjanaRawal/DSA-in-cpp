#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout<<"Enter number : ";
    cin>>n;

    // for(int i=1 ; i<=n ; i++)
    // {
    //     for(int j=1 ; j<=n ; j++)
    //     cout<<n-j+1<<" ";

    //     cout<<endl;
    // }

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}