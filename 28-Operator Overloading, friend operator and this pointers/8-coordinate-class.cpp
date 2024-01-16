/*Create a Coordinate class for 3 variables x,y and z and overload comma operator
such that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and
c3 are objects of 3D coordinate class*/
#include <iostream>
using namespace std;
class Coordinate
{
    private:
    int x;
    int y;
    int z;
    public:
    Coordinate()
    {

    }
    Coordinate(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }
    Coordinate(const Coordinate &c)
    {
        x = c.x;
        y = c.y;
        z = c.z;
    }
    Coordinate operator,(Coordinate c)
    {
        Coordinate temp;
        temp.x = c.x;
        temp.y = c.y;
        temp.z = c.z;
        return temp;
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};
int main()
{
    Coordinate c1(1,2,3),c2(4,5,6);
    Coordinate c3 = (c1,c2);
    c1.display();
    c3.display();
    return 0;
}