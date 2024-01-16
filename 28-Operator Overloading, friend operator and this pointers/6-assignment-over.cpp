/*Create a complex class and overload assignment operator for that class.*/
#include <iostream>
using namespace std;

class Complex
{   
    private:
    int real;
    int imag;
    public:
    void getData()
    {
        cout<<"Enter real and imag number : "<<endl;
        cin>>real>>imag;
    }
    void operator=(Complex c)
    {
        
        real = c.real;
        imag = c.imag;
    }
    void display()
    {
        cout<<"Real is "<<real<<" Imag is "<<imag;
    }
    
};
int main()
{
    Complex c1,c2;
    c1.getData();
    c2 = c1;
    c2.display();
    
}
