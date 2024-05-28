
//Find the first and last element using the STL array
#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int,5> a  {10,20,30,40,50};

    cout<<"first Element : "<<a.front();
    cout<<"\nLast Element : "<<a.back();
}