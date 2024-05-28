/*Write a C++ Program to Add two numbers using function templat*/
#include <iostream>
using namespace std;
template<class n1,class n2,class R>
class Add
{   public:
    R add(n1 a,n2 b)
    {
        return a+b;
    }
};
int main()
{
    Add <int,float,float> s;
    cout<<"SUM is "<<s.add(10,19);
}