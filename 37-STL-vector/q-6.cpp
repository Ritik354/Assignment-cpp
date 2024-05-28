/*reverse vector elements*/
#include <iostream>
#include <vector>
#include <algorithm>
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
    reverse(a.begin(),a.end());
    for(auto i: a)
    {
        cout<<i<<" ";
    }
    return 0;
}