/*Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add
functions to support Invent1 to float and Invent1 to Invent2 type*/
#include <iostream>
using namespace std;

class Invent1
{
    int x;
    public:
    Invent1(int x)
    {
        this->x = x;
    }
    void display()
    {
        cout<<"Invent1 i1 = "<<x<<endl;
    }
    operator float()
    {
        cout<<"int()"<<endl;
        return x;
    }
    int getx()
    {return x;}
};
class Invent2
{
    int y;
    public:
    Invent2(int y)
    {
        this->y = y;
    }
    Invent2(Invent1 i)
    {
        y =i.getx();
    }
    void display()
    {
        cout<<"Invent2 i2 = "<<y<<endl;
    }
};
int main()
{
    Invent1 i1(5);
    Invent2 i2(10);
    float a;
    a = i1;
    i2.display();
    i2 = i1;
    i1.display();
    i2.display();
    cout<<a;
}