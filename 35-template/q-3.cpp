/*Write a C++ program to find the largest of three elements using a template*/
#include <iostream>
using namespace std;
template<class p,class q,class r>
class Largest
{
    public:
    void large(p x,q y,r z)
    {
        if(x>y)
        {
            if(x>z){
                cout<<x<<" is largest";
            }else{
                cout<<z<<" is largest";
            }
            
        }else
        {
            if(y>z)
            {
                cout<<y<<" is largest";
            }else
                cout<<z<<" is largest";
            
        }
    }

};
int main()
{   
    Largest <int,int,int>a;
    Largest<float,float,float>b;
    a.large(5,10,0);
    b.large(51.6,9.8,63.5);
}