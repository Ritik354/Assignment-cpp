#include <iostream>
using namespace std;
int fib(int n)
{
    int sum=0,t1=0,t2=1;
    
    while(sum<n)
        {
                
                t1=t2;
                t2= sum;
                sum=t1+t2;
                cout<< sum<<endl;
                    
        }
        if(sum==n)
             return 1;
        else
            return 0;
}
int main()
{
    int n;
    cout<<"Enter a number to check"<<endl<<":";
    cin>>n;
    
    if(fib(n))
    {
        cout<<"Term is in fibonnaci series";
    }else
        cout<<"not in seires";
}