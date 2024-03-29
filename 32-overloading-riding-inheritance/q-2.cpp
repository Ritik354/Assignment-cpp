#include <iostream>
using namespace std;
class RECTANGLE
{
    public:
    void area(int x,int y)
    {
        cout<<"Area is "<<x*y;
    }
    void area(float x,float y)
    {
        cout<<"\nArea is "<<x*y;
    }
    void area(int x,float y)
    {
        cout<<"\nArea is "<<x*y;
    }
    void area(float x,int y)
    {
        cout<<"\nArea is "<<x*y;
    }
    
};
int main()
{
    RECTANGLE r1,r2;
    int a = 5,b= 15;
    float x = 14,y=5.56;
    r1.area(a,b);
    r2.area(x,y);
    r1.area(a,y);
    r2.area(x,b);


}
