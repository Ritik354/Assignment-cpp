#include <iostream>
using namespace std;
class ABC
{
    int x;
    public:
    ABC()
    {

    }
    ABC(int a)
    {
        x = a;
    }
};
class IList 
{
    int x;
    const int y;
    int &z;
    ABC b;
    public:

    IList(int a,int b):x(a),y(b),z(x),b(5)//initializer list
    {
        
    }
    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }

};
int main()
{
    IList i(1,2);
    i.display();

}