//Returns the element from the given index using the STL array.
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,5> a = {10,20,30,40,50};
    //get<key>(object)
    cout<<"Element : "<< get<3>(a);
    cout<<endl;
    cout<<"Element : "<< a.at(4);
}