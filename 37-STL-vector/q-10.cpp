/*Write a program to check whether an element exists in a vector or not*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int value;
    vector<int> a {1,5,9,7,3,8,4,6};
    cout<<"Enter a value to find : ";
    cin>>value;
    vector<int>:: iterator it = find(a.begin(),a.end(),value);
    
    
    
    if(it != a.end())
    {
        cout<<"element found at position : ";
        cout<<it - a.begin() +1;
    
    }else
    {
        cout<<"element not found";
    }
    return 0;
}