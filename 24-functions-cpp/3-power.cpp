/*Define a function to calculate x raised to the power y*/
#include <iostream>
#include <math.h>
using namespace std;
void power(int n,int m)
{
    int sum =1;
    for(int i=0;i<m;i++)
    {
        sum=sum*n;
    
    }
    cout<<n<<" to power "<<m<<" is "<<sum;

}
int main()
{
    int n,m;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Enter the power :";
    cin>>m;
    power(n,m);
}