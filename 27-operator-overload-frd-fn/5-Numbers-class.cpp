/*Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers*/
#include <iostream>
using namespace std;
class Numbers
{
    private:
    int x,y,z;
    public:
    Numbers()
    {}
    
    void getNumber()
    {
        cout<<endl<<"Enter first number : ";
        cin>>x;
        cout<<endl<<"Enter second number : ";
        cin>>y;
        cout<<endl<<"Enter third number : ";
        cin>>z;
    }
    Numbers operator-()
    {
        
        x = -x;
        y = -y;
        z = -z;
        
    }
    void display()
    {
        cout<<"x = "<<x<<endl;
        cout<<"y = "<<y<<endl;
        cout<<"z = "<<z<<endl;
    }
};
int main()
{
    Numbers n1,n2;
    cout<<"Enter three numbers"<<endl;
    n1.getNumber();
    cout<<"Entered values are : "<<endl;
    (n1).display();
    cout<<endl<<"Negated values are : "<<endl;
    (-n1);
    (n1).display();
    return 0;
}