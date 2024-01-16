//Create a Product class and convert Product type to Item type using constructor
#include <iostream>
using namespace std;
class Item;
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
};
class Item
{
    int i;
    public:
    
    void display()
    {
        cout<<"i = "<<i<<endl;
    }
    Item(){}
    Item(Product p)
    {
        i = p.getx() * p.gety();
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