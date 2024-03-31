/*Using the concept of pointers, write a function that swaps the private data values of
two objects of the same class type*/
#include <iostream>
using namespace std;
class A
{
    int x;
    public:
    A(int a)
    {
        x=a;
    }
    void swap(A *p)
    {
        int n;
        n = x;
        x = p->x;
        p->x = n;
    }
    int get_x()
    {
        return x;
    }
};
int main()
{
    A n1(5),n2(8);
    cout<<"Value before swap n1 : "<<n1.get_x()<<" Value before swap : "<<n2.get_x();
    n2.swap(&n1);
    cout<<"\nValue after swap n1 : "<<n1.get_x()<<" Value after swap : "<<n2.get_x();
    
}