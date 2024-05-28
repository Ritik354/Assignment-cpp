/*Sort an array in ascending order using sort() function in C++ STL*/
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    int a[]= {7,8,5,4,2,0,99,257,3};
    int size = sizeof(a)/sizeof(int);
    
    sort(a,a+size);
   for(int i = 0;i<size;i++)
   {
    cout<<a[i]<<" ";
   }
return 0;
}