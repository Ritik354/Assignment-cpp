/*Write a C++ program to overload unary 
operators that is increment and decrement.*/

#include <iostream>
using namespace std;
class Math
{
    private:
    int n;
    public:
    Math()
    {

    }
    Math(int x)
    {
        n = x;
        
    }
    Math operator++()
    {
        Math temp;
        cout<<"pre increment fn called "<<endl;
        temp.n = ++n;
        return temp;
    }
    Math operator--()
    {
        Math temp;
        cout<<"pre decrement fn called "<<endl;
        temp.n = --n;
        return temp;
    }
    void displayinc()
    {
        cout<<"incremented value is "<<n<<endl;
    }
    void displaydec()
    {
        cout<<"decremented value is "<<n<<endl;
    }
};
int main()
{
    Math m1(5),m2(15),m3,m4;
    (++m1).displayinc();
    (--m2).displaydec();
    return 0;
}