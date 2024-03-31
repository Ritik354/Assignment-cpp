/*. Create a base class called shape. Use this class to store two double type values that
could be used to compute the area of figures. Derive two specific classes called
square and parallelogram from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_area() to compute and display the area of figures. Make
display_area() as a virtual function and redefine this function in the derived classes to
suit their requirements.
Using these three classes, design a program that will accept dimensions of a
square or a parallelogram interactively, and display the area*/
#include <iostream>
using namespace std;
class shape
{
    protected:
    double ans,l,b;
    public:
    int choice;
    void get_details()
    {
        
        cout<<"\nEnter side/base of square/parallelogram: ";
        cin>>l;
        cout<<"\nEnter height if parallelogram or 0 for square : ";
        cin>>b;
    }
    
    virtual void display_volume() = 0;
};
class square : public shape
{
    public:
    
    void display_volume()
    {
        ans = l*l;
        cout<<" \nVolume of square is "<<ans<<" of side "<<l; 
    }
}; 
class parallelogram: public shape
{
    public:
    void display_volume()
    {
        ans = l*b;
        cout<<" \nArea of parallelogram is "<<ans<<" of base "<<b<<" height "<<l; 
    }
};
int main()
{
    square s;
    parallelogram p;
    int flag= 1,choice;
    while(flag==1)
    {
        cout<<"\n1.Area of square";
        cout<<"\n2.Volume of parallelogram";
        cout<<"\n3.Exit";
        
        cout<<"\nEnter choice :";
        cin>>choice;
        if(choice==1)
        {
            s.get_details();
            s.display_volume();

            
        }else if(choice==2)
        {
            p.get_details();
            p.display_volume();
        }else if(choice==3)
        {
            cout<<"\nEXIT";
            flag=0;
            
        }
    

}
}