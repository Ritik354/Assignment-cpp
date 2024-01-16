//Create Product class and convert Product type to Item type using casting operator

#include <iostream>
using namespace std;
class Item
{
    int i;
    public:
    
    void display()
    {
        cout<<"i = "<<i<<endl;
    }
    Item(){}
    Item(int x)
    {
        i =x;
    }
   
    
};
class Product
{
private:
    int x,y;
public:
    void setData(int x,int y)
    {
        this->x = x;
        this->y = y;
    }
    void display()
    {
        cout<<"x = "<<x<<" y = "<<y<<endl;
    }
    int getx()
    {return x;}
    int gety()
    {return y;}
    operator Item()
    {
        Item i(x+y);
        return i;
    }
};

int main()
{
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;//item(product)
 p1.display();
 i1.display();
 return 0;
}