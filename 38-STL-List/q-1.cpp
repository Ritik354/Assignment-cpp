/*List functions in C++ STL (Standard Template Library)*/
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;
int main()
{
    list<int> l1;

    l1.push_back(151);
    l1.push_back(100);
    l1.push_back(15);
    l1.push_back(200);
    l1.push_front(4);
    l1.push_front(20);
    cout<<"list elements\n";
    for(auto i: l1)
    {
        cout<<i<<' ';
    }
    cout<<"\nreverse list\n";
    for(auto i: l1)
    {
        cout<<i<<' ';
    }
    cout<<"\nsorted list\n";
    l1.sort();
    for(auto i: l1)
    {
        cout<<i<<" ";
    }
    cout<<"\nfront element : "<<l1.front();
    cout<<"\npop front \n";
    l1.pop_front();
    cout<<"\nlast element : "<<l1.back()<<endl;
    for(auto i: l1)
    {
        cout<<i<<" ";
    }

}