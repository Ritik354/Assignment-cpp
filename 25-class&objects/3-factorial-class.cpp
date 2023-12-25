/**/
#include<iostream>
using namespace std;

class factorial
{
    private:
    int fact;
    int n;
    public:
    void setN(int x)
    {
        n = x;
    } 
    int getN()
    {
        return n;
    } 
    int getFactorial()
    {
        return fact;
    }   
    void calculateFactorial()
    {
        int f=1;
        if(n<=0)
            return;
        
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        fact = f;
    }
      
};

int main()
{
    factorial n,n1;
    n.setN(5);
    n1.setN(6);
    n.calculateFactorial();
    n1.calculateFactorial();
    cout<<"Factorial of "<<n.getN()<<" is "<<n.getFactorial()<<endl;
    cout<<"Factorial of "<<n1.getN()<<" is "<<n1.getFactorial()<<endl;
    return 0;
}