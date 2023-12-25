//Define overloaded functions to calculate area of circle, area of rectangle and area of

#include <iostream>
using namespace std;

float area(int r)
{
    return (3.14*r*r);
}
int area(int l,int b)
{
    return (l*b);
}
float area(float x, float y)
{
    return (x*y)/2;
}
int main()
{
    int n,l,b,r;
    float x,y;
    
        cout<<"Enter radius of circle";
        cin>>r;
        cout<<"Enter length and breadth of rectangle";
        cin>>l>>b;
        cout<<"Enter length and breadth of triangle";
        cin>>x>>y;
        area(l,b);

         cout<<"area of circle is "<<area(r)<<endl;
         cout<<"area of rectangle is "<<area(l,b)<<endl;
         cout<<"area of triangle is "<<area(x,y)<<endl;
    
    return 0;
}