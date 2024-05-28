/*Iterate a list in reverse order C++ STL*/
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> l1 {1,2,3,4,5};

    list<int> :: iterator it;
    for(it= l1.begin();it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}