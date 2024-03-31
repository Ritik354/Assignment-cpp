/*Extend the above program to display the area of circles. This requires the addition of
a new derived class 'circle' that computes the area of a circle. Remember, for a circle
we need only one value, its radius, but the get_data() function in the base class
requires two values to be passed. (Hint: Make the second argument of get_data()
function as a default one with zero value.)*/
#include <iostream>
using namespace std;
class shape
{
    
    protected:
    double l,b,r;
    public:
    void get_data(double x,double y=0)
    {   
        l = x;
        b = y;
        
    }
    virtual void display_area()=0;
};
class triangle:public shape
{
    public:
    
    void display_area()
    {
        cout<<"\nArea of Triangle : "<<(0.5*l*b);
    }
};
class rectangle:public shape

{
    public:
    
    void display_area()
    {
        double n=l*b;
        cout<<"\nArea of Rectangle : "<<n;
    }

};
class circle : public shape
{
    public:
    
    void display_area()
    {
        float n=3.14*l*l;
        cout<<"\nArea of Circle : "<<n;
    }
};
int main()
{
    int choice,flag=1;
    double a,b;
    rectangle r;
    triangle t;
    circle c;
    while(flag==1)
    {
        cout<<"\n1.Area of triangle";
        cout<<"\n2.Area of rectangle";
        cout<<"\n3.circle";
        cout<<"\n4.Exit";
        cout<<"\nEnter choice :";
        cin>>choice;
        if(choice==1)
        {
            
            cout<<"\nEnter Height : ";
            cin>>a;
            cout<<"\nEnter Bredth : ";
            cin>>b;    
            t.get_data(a,b);
            t.display_area();
        }else if(choice==2)
        {
            cout<<"\nEnter Length : ";
            cin>>a;
            cout<<"\nEnter Bredth : ";
            cin>>b;  
            r.get_data(a,b);
            r.display_area();
        }else if(choice==3)
        {
            cout<<"\nEnter redius : ";
            cin>>a;
            
            c.get_data(a,b);
            c.display_area();
        }else{
            cout<<"\nEXIT";
            flag=0;
        }

    }
    
}