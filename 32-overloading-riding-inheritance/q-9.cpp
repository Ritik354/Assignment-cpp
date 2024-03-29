/*Write a C++ program to calculate the area of triangle, rectangle and circle using
constructor overloading. The program should be menu driven*/
#include <iostream>
#include <math.h>
using namespace std;
class AREA
{
    float areaofcircle = 0,areaoftriangle=0,areaofrectangle=0;
    public:
    AREA(){}
    AREA(float r)
    {
        areaofcircle = 3.14*r*r;
        cout<<"Area of circle : "<<areaofcircle;
    }
    AREA(float l,float b)
    {
        
        areaofrectangle = (l*b);
        cout<<"Area of rectangle : "<<areaofrectangle;
    }
    
    AREA(float b ,float h,float l)
    {
        float s =  (l*b*h)/2;
        areaoftriangle = sqrt(s*(s-h)*(s-b)*(s-l));
        cout<<"Area of Triangle : "<<areaoftriangle;
        
    }
    

};
int main()
{
    int count,i,n,choice,flag=1;
    while(flag ==1)
    {
        cout<<"\n--------------------\n";
        cout<<"\n1.Circle Area";
        cout<<"\n2.Triangle Area";
        cout<<"\n3.Rectangle Area";
        cout<<"\n4.EXIT";
        cout<<"\nEnter your choice : ";
        cin>>choice;
        system("cls");
        switch(choice)
        {
            case 1:
            {
                float r;
                cout<<"\nEnter radius of circle : ";
                cin>>r;
                AREA C(r);
                
                break;
            }
            case 2:
            {
                float l,b,h;
                cout<<"\nEnter sides of triangle \n l : ";
                cin>>l;
                cout<<"\nb : ";
                cin>>b;
                cout<<"\nh : ";
                cin>>h;
                AREA T(l,b,h);
                break;
            }
            case 3:
            {
                float l,b;
                cout<<"\nEnter sides of Rectangle\nl : ";
                cin>>l;
                cout<<"\nb : ";
                cin>>b;
                AREA R(l,b);
                break;
            }
            case 4:
                flag=0;
                break;
        }
    }
    
    
}
