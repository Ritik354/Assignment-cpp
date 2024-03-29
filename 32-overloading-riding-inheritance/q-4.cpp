/*Define a class Addition that can add 2 or 3 numbers of different data types using
function overloading.*/
#include <iostream>
using namespace std;
class Addition
{
    public:
    void add(int a,int b)
    {
        cout<<"\nSUM is "<<a+b;

    }
    void add(int a,float b)
    {
        cout<<"\nSUM is "<<a+b;
        
    }
    void add(float a,int b,float)
    {
        cout<<"\nSUM is "<<a+b;
        
    }
    void add(double a,double b)
    {
        cout<<"\nSUM is "<<a+b;
        
    }
};
int main()
{
    Addition a1,a2,a3;
    a1.add(5,10);
    a1.add(5,5,67);
    a1.add(5.68,78.489);
    a1.add(16.8,7,6.98);

}