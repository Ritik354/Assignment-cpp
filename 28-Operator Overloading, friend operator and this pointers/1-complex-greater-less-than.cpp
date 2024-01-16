/*Define a class Complex with appropriate instance variables and member functions.
Overload following operators
a. << insertion operator
b. >> extraction operator*/
#include <iostream>
using namespace std;
class Complex
{
    private:
    int real;
    int imag;
    public:
    friend ostream & operator<<(ostream &out,Complex c)
    {
        out<<"real = "<<c.real<<" imag = "<<c.imag<<endl;
    }
    friend istream& operator>>(istream &in,Complex &c)
    {
        cout<<"Enter real number  :  ";
        in>>c.real;
        cout<<"Enter imag number  :  ";
        in>>c.imag;
    }
};
int main()
{
    Complex c1,c2;
    cout<<"Enter complex number"<<endl;
    cin>>c1;
    cout<<"complex number : ";
    cout<<c1;
    return 0;
}