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
    int getreal()
    {
        return real;
    }
    int getimaginary()
    {
        return img;
    }
};
int main()
{
    Complex c1(12, 48), c3, c4(2, 8), c5;
    Complex c2 = c1;
    c3 = c1 + c2; // c1.operator+(c2);
    c5 = c1 - c4; // c1.operator-(c4);
    cout << "Real = " << c1.getreal() << " + "
         << "Imaginary = " << c1.getimaginary() << "i" << endl;
    cout << "Real = " << c2.getreal() << " + "
         << "Imaginary = " << c2.getimaginary() << "i" << endl;
    cout << "Real = " << c3.getreal() << " + "
         << "Imaginary = " << c3.getimaginary() << "i" << endl;
    cout << "Real = " << c4.getreal() << " + "
         << "Imaginary = " << c4.getimaginary() << "i" << endl;
    cout << "Real = " << c5.getreal() << " + "
         << "Imaginary = " << c5.getimaginary() << "i" << endl;
    return 0;
}