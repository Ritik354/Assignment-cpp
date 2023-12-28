/*Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box*/
#include <iostream>
using namespace std;
class Box
{
    private:
    int length;
    int breadth;
    int height;
    int vol;
    public:
    Box(int x,int y,int z)
    {
        length  = x;
        breadth = y;
        height  = z;
    }
    void calcVolume()
    {
        vol = length*breadth*height;
    }
    void showData()
    {
        cout<<"length is "<<length<<" breadth is "<<breadth<<" heigth is "<<height<<endl;
        cout<<"Volume of Box is "<<vol<<endl;
    }

};
int main()
{
    Box b1(5,5,5);
    b1.calcVolume();
    b1.showData();
    return 0;
}