/*C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions*/
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,5> a {1,2,3,4,5};
    array<string,5> b {"indore","bhopal","nagpur","goa","delhi"};
   
    for(auto x= a.rbegin();x<a.rend();x++)
    {
        cout<<*x<<" ";
    }
    for(auto x= b.rend() -1;x>=b.rbegin()-1;x--)
    {
        cout<<*x<<" ";
    }
return 0;
}