//Write a program to find sum of vector elements
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
int main()
{
    vector<int> a;
    int n;
    int value;
    cout<<"Enter number of elements to enter : ";
    cin>>n;
    cout<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter element : ";
        cin>>value;
        cout<<endl;
        a.push_back(value);
        
    }
    cout<<endl;
    int sum = accumulate(a.begin(),a.end(),0);
    cout<<endl;
    for(int i: a)
    {
        cout<<i<<" ";
    }
    cout<<"\n Sum is "<<sum;
    
}