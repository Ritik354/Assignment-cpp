/*Create a base class called proof. Use this class to store two int type values that could
be used to prove that triangle is a right angled triangle. Create a class compute
which will determine whether a triangle is a right angled triangle.
Using these classes, design a program that will accept dimensions of a triangle, and
display the result*/
#include <iostream>
using namespace std;
class proof
{
    protected:
    int l,b,h,lhs,rhs;
    int check;
    public:
    

};
class compute:public proof
{
public:
void get_details()
{
    cout<<"\nEnter length,bredth and hypotenious of triangle : ";
    cin>>l;
    cin>>b;
    cin>>h;
    
}
    void prove()
    {
    lhs = b*b + l*l;
    rhs = h*h;
    }
void display()
{
    if(rhs == lhs)
    {
        cout<<"\nIt's a right angle triangle";
    }else
    {
        cout<<"\nIt's not a right angle triangle";
    }
}
};
int main()
{
    compute c;
    c.get_details();
    c.prove();
    c.display();
}