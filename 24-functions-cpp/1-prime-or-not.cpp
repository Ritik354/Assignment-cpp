/*Define a function to check whether a given number is a Prime number or not.*/
#include <iostream>
using namespace std;
void prime(int n)
{
    int flag =0;
    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            flag =1;
        }
    }
    if(flag==0)
    {
        cout<<endl<<"It's a prime number";
    }
    else
        cout<<"It's not a prime number";
}
int main()
{
    int n;
    cout<<"Enter a number to check :";
    cin>>n;
    cout<<"Enter number is "<<n<<endl;
    prime(n);
    return 0;
}