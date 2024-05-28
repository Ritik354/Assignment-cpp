/*Write a function to print the element of a vector and take input from the user.*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
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
    for(auto i : a)
    {
        cout<<i<<' ';
    }
}