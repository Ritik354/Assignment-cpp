#include <iostream>
using namespace std;
class Area
{
    private:
    int radius,length,breadth,side;
    
    
    public:
    void setN()
    {
        cout<<"Enter radius of circle :"<<endl;
        cin>>radius;
        cout<<"Enter length and breadth of rectangle :"<<endl;
        cin>>length>>breadth;
        cout<<"Enter side of square :"<<endl;
        cin>>side;
    }
    float Areaofcircle()
    {
        return 3.14*radius*radius;
            
    }
    float Areaofrectangle()
    {
        return length *breadth;
    }
    float Areaofsquare()
    {
        return side *side;
    }
};
int main()
{
    Area N;
    N.setN();
    N.Areaofcircle();
    N.Areaofrectangle();
    N.Areaofsquare();
    cout<<"Area of circle is "<<N.Areaofcircle()<<endl;
    cout<<"Area of rectangle is "<<N.Areaofrectangle()<<endl;
    cout<<"Area of square is "<<N.Areaofsquare()<<endl;
    return 0;
}