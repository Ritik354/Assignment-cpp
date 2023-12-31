/*Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real;
    int img;

public:
    Complex()
    {
        cout << "default constructor called " << endl;
    }
    Complex(int x, int y)
    {
        cout << "Parameterised constructor called" << endl;
        real = x;
        img = y;
    }
    Complex(const int &x)
    {
        cout << "Copy constructor called" << endl;
    }
    Complex operator+(Complex C)
    {
        cout << " operator + called" << endl;
        Complex temp;
        temp.real = real + C.real;
        temp.img = img + C.img;
        return temp;
    }
    Complex operator-(Complex C)
    {
        cout << " operator - called" << endl;
        Complex temp;
        temp.real = real - C.real;
        temp.img = img - C.img;
        return temp;
    }
    Complex operator*(Complex C)
    {
        cout<<" operator * called"<<endl;
        Complex temp;
        temp.real = real * C.real;
        temp.img = img   * C.img ;
        return temp;
    }
    void operator==(Complex C)
    {
        if(real ==C.real&& img == C.img)
        {
            cout<<"given complex numbers are equal"<<endl;
        }else
        {
            cout<<"are not equal"<<endl;
        }
    }
    int getreal()
    {
        return real;
    }
    int getimaginary()
    {
        return img;
    }
    void display()
    {
        cout << "Real = " << getreal() << " + "<< "Imaginary = " << getimaginary() << "i" << endl;
    }
};
int main()
{
    Complex c1(12, 48), c3, c4(2, 8), c5,c6;
    Complex c2 = c1;
    c3 = c1 + c2; // c1.operator+(c2);plus operator overloading
    c5 = c1 - c4; // c1.operator-(c4);minus oerator overloading
    c6 = c4 * c5; // c4.operator*(c5);multiply operator overloading
    c1.operator==(c2);//== operator called
    c1.display();
    
    c2.display();
    cout<<"sum is"<<endl;
    c3.display();
    c4.display();
    cout<<"subtraction is"<<endl;
    c5.display();
    cout<<"multiplication is"<<endl;
    c6.display();
    return 0;
}