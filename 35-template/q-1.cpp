/*Write a C++ program to demonstrate the addition of multiple types of data using
generic functions or templates.*/
#include <iostream>
using namespace std;
template<class p,class q,class r>
class Add
{
    public:
    p add(q x,r y)
    {
        cout<<"\nSum is "<<x+y;
    }

};
int main()
{   
    Add <int,int,int>a;
    Add<float,float,float>b;
    a.add(5,10);
    b.add(5.6,9.8);
}