/*Write a C++ Program to Swap data using function template*/
#include <iostream>
using namespace std;
template <class T,class S , class r>
class Swap
{
    int x;

    public:
    r swap(T a ,S b )
    {
        cout<<" \nelements before swapping a : "<<a<<" b : "<<b;
        x =a;
        a =b;
        b = x;
        cout<<" \nelements after swapping a : "<<a<<" b : "<<b;
    }
};
int main()
{
    Swap <int,int,int> s;
    s.swap(10,20);
    //s.swap(5.6,8.9);

}