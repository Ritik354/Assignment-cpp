#include <iostream>
using namespace std;
int add(int x,int y,int z=0)//default argument use
{
    int sum;
    sum = x + y + z;
    return sum;
}
int main()
{
    int a,b,c,n;
    cout<<"Enter number of digits to add 2 or 3"<<endl;
    cin>>n;
    if(n==2)
    {
        cout<<"Enter 2 digits"<<endl;
        cin>>a>>b;
        cout<<add(a,b);
    }
    else
        cout<<"Enter 3 digits"<<endl;
        cin>>a>>b>>c;
        cout<<add(a,b,c);
    
    return 0;
}        