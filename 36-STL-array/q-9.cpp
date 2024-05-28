/*C++ program to find the integers which come an odd number of times in an array
using C++ STL*/
#include <iostream>
#include <array>
using namespace std;
int find_odd(array<int,5> a)
{
    int result=0;
    for(int i=0;i<a.size();i++)
    {
        result = result^ a[i];
    }
    return result;
}
int main()
{
    array<int,5> a {9,7,3,3,7};

    int result = find_odd(a);
    cout<<"result = "<<result;

}