/*Define a function to find the highest value digit in a given number*/
#include <iostream>
using namespace std;
void max(int m)
{
    int a,b,max=0;
    
    while(m>0)
    {
        a=m%10;
        m=m/10;
        if(a>max)
        {
            max=a;
        }
    }

    cout<<"Max digit in the given number is "<<max;
}
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    max(n);
    return 0;
}