/*Write a C++ program to add two complex numbers using operator overloaded by a
friend function*/
#include <iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int img ;
    public:
    Complex()
    {

    }
    
    Complex(int x,int y)
    {
        real = x;
        img  = y;
    }
    friend int operator+(Complex C1,Complex C2)
    {
        int n,m;
        n = C1.img + C2.img;
        m = C1.real + C2.real;
        cout<<"Sum is "<<"real = "<<n<<"imagnary = "<<m<<endl;
    }
    void display()
    {
        cout<<"real = "<<real<<"imagnary = "<<img<<endl;
    }   
};
int main()
{
    Complex c1(5,6),c2(5,4),c3;
    
    c1.display();
    c2.display();
    c1+c2;
    
    return 0;
}