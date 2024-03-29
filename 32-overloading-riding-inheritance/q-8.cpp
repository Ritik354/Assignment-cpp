/*Write a C++ program to find the factorial of a number using copy constructor*/
#include <iostream>
using namespace std;
class A
{
    int n,facti,i;
    public:
    A(int x)
    {
        n = x;
        facti =1;
    }
    A(A &x)//copy constructor
    {
        n = x.n;
        facti = 1;
        
    }
    void calculate()
    {
        for(int i=1;i<=n;i++)
        {
            facti = facti*i;
        }
        cout<<"\nFactorial is "<<facti;
    }
};
int main()
{
    A f(5);
    A f2 = f;
    f2.calculate();

   
}