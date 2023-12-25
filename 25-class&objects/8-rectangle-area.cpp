#include <iostream>
using namespace std;
class Rectangle
{
    private:
    int l,b;
    int area;
    
    public:
    void setN()
    {
        cout<<"Enter length and breadth";
        cin>>l>>b;
    }
    void calcArea()
    {
        area = l*b;
    }
    int getArea()
    {
        return area;
    }
};
int main()
{
    Rectangle N;
    N.setN();
    N.calcArea();
    cout<<"Area of rectangle is "<<N.getArea()<<endl;
    return 0;
}