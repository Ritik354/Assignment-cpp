/*Write a C++ program to demonstrate try, throw and catch statements*/
#include <iostream>
using namespace std;

int main()
{
    char n;
    cout<<"Enter a char :";
    cin>>n;
    try
    {
        throw 'n';
    }
    catch(char e)
    {
        cout<<"\n Exception caught ";
    }
    
return 0;
}