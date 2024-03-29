/*Create two classes Rupee and Dollar and add necessary functions to support Rupee to
Dollar and Dollar to Rupee conversion*/
#include <iostream>
using namespace std;
class Rupee
{
    int r;
    public:
    Rupee(int x)
    {
        r = x;
    }
    operator int()
    {
        return r;
    }
    int getRupee()
    {
        return r;
    }
    void display()
    {
        cout<<"Rupee = "<<r<<endl;
    }
    operator Rupee();
};

class Dollar
{

    int d;
    public:
    Dollar()
    {
        
    }
    Dollar(int x)
    {
        d = x;
    }
    void display()
    {
        cout<<"Dollar = "<<d<<endl;
    }
    Dollar(Rupee x)
    {
        d = x.getRupee()/100;
    }
    operator Rupee()
    {
        return d*100;
    }
    
};

int main()
{
 Rupee r = 2300;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
d = 90;
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
 return 0;
}