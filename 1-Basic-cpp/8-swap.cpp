//swap two int values without using third variable
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number";
    cin>>a;
    cout<<"Enter second number";
    cin>>b;
    cout<<"original input a = "<<a<<" b = "<<b;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<endl;
    cout<<"Swaped value a = "<<a<<" b = "<<b;
    return 0;
}