#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int n;
    n=*x;
    *x=*y;
    *y=n;
    
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to swap";
    cin>>a>>b;
    cout<<"Enter values are"<<endl<<"first :"<<a<<endl<<"second :"<<b<<endl;
    swap(&a,&b);
    cout<<"swapped values are"<<endl<<"first :"<<a<<endl<<"second :"<<b;
    return 0;
}