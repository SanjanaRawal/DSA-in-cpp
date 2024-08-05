#include <iostream>
using namespace std;
int main()
{
    int a=0;
    int b=1;

    int n;
    cout<<"How many numbers of the series you want to see?"<<endl;
    cin>>n;

    cout<<a<<"  ";
    cout<<b<<"  "; 

    for(int i=1 ; i<=n-2 ; i++)
    {
        int next = a+b;
        cout<<next<<"  ";
        //swapping of numbers
        a=b;
        b=next;
    }
}