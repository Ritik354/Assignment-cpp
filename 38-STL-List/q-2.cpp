/*Assign the elements to the list (different methods) - Example of list::assign() | C++
STL*/
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> l1;
    list<int> l2;
    list<int> l3;
    list<int> l4;
    l1.assign(5,10);

    for(auto i : l1)
    {
        cout<<i<<" ";
    }
    l2.assign(l1.begin(),l1.end());
    for(auto i : l1)
    {
        cout<<i<<" ";
    }
    int array[]= {1,2,3,4,5};
    l3.assign(array,array+4);
    for(auto i : l1)
    {
        cout<<i<<" ";
    }

}