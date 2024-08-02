#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    int sum = 0 ;

    cout<<"The numbers are : \n";

    for(int i=1 ; i<=n ; i++)
    {
        cout<<i<<endl;
        sum = sum + i ;
    }

    cout<<"The sum is : ";
    cout<<sum;
}