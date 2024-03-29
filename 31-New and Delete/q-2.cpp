/*Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class*/
#include <iostream>
using namespace std;
class num
{
    
    protected:
    int a,b;
    public:
    void setNum()
    {
        cout<<"Enter two numbers"<<endl;
        cin>>a>>b;
        
    }
};
class add:public num
{
    public:
    void getNum()
    {
        cout<<"Sum = "<<a+b;
    }
};
int main()
{
    add d;
    d.setNum();
    d.getNum();
    return 0;
}