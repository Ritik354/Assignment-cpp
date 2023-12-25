/*Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include<iostream>
using namespace std;

class complex
{
    int real;
    int img;
    public:
    void setdata(int r,int i)
    {
        real= r;
        img = i;
    }
    void display(complex c)
    {
        cout<<real<<"+"<<img<<"i"<<endl;
        cout<<c.real<<"+"<<c.img<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2;
    c1.setdata(2,3);
    c2.setdata(3,7);
    c1.display(c2);
    return 0;
}