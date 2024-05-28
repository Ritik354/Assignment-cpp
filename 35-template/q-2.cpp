/*Write a C++ Program to find Largest among two numbers using function template*/
#include <iostream>
using namespace std;
template<class p,class q,class r>
class large
{
    public:
    p add(q x,r y)
    {
        if(x>y)
        {
            cout<<x<<" is largest";
        }else
        {
            cout<<y<<" is largest";
        }
    }

};
int main()
{   
    large <int,int,int>a;
    large <float,float,float>b;
    a.add(5,10);
    b.add(5.6,9.8);
}