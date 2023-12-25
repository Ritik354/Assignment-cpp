#include <iostream>
using namespace std;
class circle
{
    private:
    int r;
    float area;
    
    public:
    void setN()
    {
        cout<<"Enter radius :";
        cin>>r;
    }
    void calcArea()
    {
        area = 3.14*r*r;
    }
    float getArea()
    {
        return area;
    }
};
int main()
{
    circle N;
    N.setN();
    N.calcArea();
    cout<<"Area of circle is "<<N.getArea()<<endl;
    return 0;
}