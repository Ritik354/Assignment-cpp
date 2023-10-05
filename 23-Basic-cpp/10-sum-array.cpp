//cpp program to add array of 10
#include <iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 numbers";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    cout<<endl;
    cout<<"Sum of numbers is "<<sum;
    return 0;
}