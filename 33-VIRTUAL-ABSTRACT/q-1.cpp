/*Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
triangle and rectangle from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
triangle or a rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in
the case of rectangles, and as base and height in the case of the triangles, and used
as follows:
Area of rectangle = x * y Area of triangle = 1/2 * x * y*/
#include <iostream>
using namespace std;
class shape
{
    protected:
    double l,b;
    public:
    void get_data(double x,double y)
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
        int n=l*b;
        cout<<"\nArea of Rectangle : "<<n;
    }

};

int main()
{
    int choice,flag=1;
    double a,b;
    rectangle r;
    triangle t;
    while(flag==1)
    {
        cout<<"\n1.Area of triangle";
        cout<<"\n2.Area of rectangle";
        cout<<"\n3.Exit";
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
        }else if(choice>=3)
        {
            cout<<"\nEXIT";
            flag=0;
        }

    }
    
}