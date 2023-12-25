#include <iostream>
using namespace std;
int add(int n,int m)
{
    return (n+m);
}
float add(float x,float y)
{
    return (x+y);
}
int main()
{
    int n,m,flag;
    float x,y;
    cout<<"Enter numbers to add 1.float or 2.int"<<endl;
    cin>>flag;
    if(flag == 1)
    {
        cout<<"Enter float numbers";
        cin>>x>>y;
        cout<<"sum is "<<add(x,y);
    }
    else
    {
        cout<<"Enter int numbers";
        cin>>n>>m;
        cout<<"Sum is "<<add(n,m);
    }
}