/*Create a class FLOAT that contains one float data member. Overload all the four
arithmetic operators so that they can operate on the objects of FLOAT.*/
#include <iostream>
using namespace std;
class FLOAT
{
    float a;
    public:
    void setData(int x)
    {
        a = x;
    }
    void showData()
    {
        cout<<"\n a = "<<a;
    }
    FLOAT operator+(FLOAT x)
    {
        FLOAT temp;
        
        temp.a = a + x.a;
        return temp;
    }
    FLOAT operator-(FLOAT x)
    {
        FLOAT temp;
        temp.a = a - x.a;
        return temp;
    }
    FLOAT operator*(FLOAT x)
    {
        FLOAT temp;
        temp.a = a * x.a;
        return temp;
    }
    FLOAT operator/(FLOAT x)
    {
        FLOAT temp;
        temp.a = a / x.a;
        return temp;
    }
};
int main()
{
    FLOAT f,f2,f3,f4;
    f.setData(450);
    f2.setData(20);
    f3 = f+f2;
    cout<<"\nSUM : ";
    f3.showData();
    f3 = f-f2;
    cout<<"\nSUB : ";
    f3.showData();
    f3 = f*f2;
    cout<<"\nMUL : ";
    f3.showData();
    f3 = f/f2;
    cout<<"\nDIV : ";
    f3.showData();
    
}