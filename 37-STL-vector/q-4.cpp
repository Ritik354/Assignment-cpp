/*Write a program to Copy one vector’s elements to another vector.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b;
    int n;
    int value;
    cout<<"Enter number of elements to enter";
    cin>>n;
    
    
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter element : ";
        cin>>value;
        a.push_back(value);
        
    }
    cout<<endl;
    a.swap(b);
    cout<<"b = \n";
    cout<<endl;
    for(auto i : b)
    {
        cout<<i<<' ';
    }
    reverse(b.begin(),b.end());
    cout<<endl;
    for(int i: b)
    {
        cout<<i<<" ";
    }
}