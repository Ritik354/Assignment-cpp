/*Create a base class called shape. Use this class to store two double type values
that could be used to compute the volume of figures. Derive two specific classes
called cube and sphere from the base shape. Add to the base class, a member
function get_data() to initialise base class data members and another member
function display_volume() to compute and display the volume of figures. Make
display_volume() as a virtual function and redefine this function in the derived
classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a cube
or a sphere interactively, and display the volume*/
#include <iostream>
using namespace std;
class shape
{
    protected:
    double ans,r;
    public:
    void get_details()
    {
        cout<<"\nEnter radius/length of cube or sphere";
        cin>>r;
    }
    
    virtual void display_volume() = 0;
};
class cube : public shape
{
    public:
    
    void display_volume()
    {
        ans = r*r*r;
        cout<<" \nVolume of cube is "<<ans<<" of side "<<r; 
    }
}; 
class sphere: public shape
{
    public:
    void display_volume()
    {
        ans = (4*3.14*r*r*r)/3;
        cout<<" \nVolume of sphere is "<<ans<<" of side "<<r; 
    }
};
int main()
{
    cube c;
    sphere s;
    int flag= 1,choice;
    while(flag==1)
    {
        cout<<"\n1.Volume of cube";
        cout<<"\n2.Volume of sphere";
        cout<<"\n3.Exit";
        
        cout<<"\nEnter choice :";
        cin>>choice;
        if(choice==1)
        {
            c.get_details();
            c.display_volume();

            
        }else if(choice==2)
        {
            s.get_details();
            s.display_volume();
        }else if(choice==3)
        {
            cout<<"\nEXIT";
            flag=0;
            
        }
    

}
}