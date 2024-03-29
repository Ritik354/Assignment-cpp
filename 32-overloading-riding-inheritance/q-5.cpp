/*Define a class A having multiple constructors. Define another class B derived from
class A. Create derived class constructors and show use of constructor in this single
inheritance*/
#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\nConstructor A with no arguments";
    }
    A(int a)
    {
        cout<<"\nconstructor A with a argument : "<<a;
    }
};
class B:public A
{
    public:
    //calling parent class constructor form child class constructor
    B(float b):A(5)
    {
        cout<<"\nconstructor B with a argument : "<<b;
    }
    B():A()
    {
        cout<<"\nConstructor B with no arguments";
    }
};
int main()
{

    B x(5.5),y;
    return 0;
}