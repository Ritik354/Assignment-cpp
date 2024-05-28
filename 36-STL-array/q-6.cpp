//Using STL to check whether an array is empty or not
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,5> a {1,2,3,4,5};
    array<int,0> b ;
   
    for(auto x= a.rbegin();x<a.rend();x++)
    {
        cout<<*x<<" ";
    }
    if(a.empty())
    {
        cout<<"Empty\n";
    }else
    {
        cout<<"not Empty\n";
    }
    if(b.empty())
    {
        cout<<"Empty\n";
    }else
    {
        cout<<"not Empty\n";
    }
return 0;
}