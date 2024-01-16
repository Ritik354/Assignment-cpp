//Write a C++ program to convert Complex type to Primitive type.
#include <iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    Complex(int x,int y)
    {
        real = x;
        imag = y;
    }
    operator int()
    {
        cout<<"int";
        return real+imag;
    }
    operator long()
    {
        cout<<"long";
        return real+imag;
    }
    void display()
    {
        cout<<"Real = "<<real<<"Imag = "<<imag;
    }
};
int main()
{
 Complex c1(3,8);
 int x;
 x = c1;//complex to int

 c1.display();
 cout<<endl<<x;
 return 0;
}