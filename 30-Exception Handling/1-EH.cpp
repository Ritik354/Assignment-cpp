/*Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/
#include <iostream>
using namespace std;
void num(int n)
{
    try
    {
        if(n>=0 && n<=9)
        {
            throw n;
        }else
        {
            cout<<"\n It is not a Single Number ";
        }
        throw;
    }
    catch(int a)
    {
        cout<<"\n It is a Single number ";

    }
    catch(char b[100])
    {
        cout<<b;
    }
}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    num(n);

}