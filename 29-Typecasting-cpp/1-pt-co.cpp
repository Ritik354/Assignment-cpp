//.Write a C++ program to convert Primitive type to Complex type
#include <iostream>
using namespace std;
class Complex{
    int real;
    int imag;
    public:
    void operator=(int x)//int to complex
    {
        real = x;
        
    }
    void display()
    {
        cout<<"Real = "<<real<<"Imag = "<<imag;
    }
};
int main()
{
 Complex c1;
 int x=5;
 c1=x;
 c1.display();
 return 0;
}