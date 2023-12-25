/*Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/
#include <iostream>
using namespace std;
int max(int n,int m)
{
    if(n>m)
        return (n);
    else
        return m;
}
float max(float x,float y)
{
    if(x>y)
        return x;
    else
        return y;    
}
int main()
{
    int n,m,flag;
    float x,y;
    cout<<"Enter numbers to max 1.float or 2.int"<<endl;
    cin>>flag;
    if(flag == 1)
    {
        cout<<"Enter float numbers";
        cin>>x>>y;
        cout<<"greater number is "<<max(x,y);
    }
    else
    {
        cout<<"Enter int numbers";
        cin>>n>>m;
        cout<<"greater number is "<<max(n,m);
    }
}