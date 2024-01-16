/*Define a class Complex with appropriate instance variables and member functions.
One of the functions should be setData() to set the properties of the object. Make
sure the names of formal arguments are the same as names of instance variables
*/
#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imag;
    public:
    Complex()
    {}
    Complex(int x,int y)
    {
        real = x;
        imag = y;
    }
    void setData(int real,int imag)
    {
        this->real = real;
        this->imag = imag;
    }
    void display()
    {
        cout<<"Real = "<<real<<" Imag = "<<imag<<endl;
    }

};
int main()
{
    Complex c1(2,3),c2;
    c2.setData(4,5);
    c1.display();
    c2.display();


}