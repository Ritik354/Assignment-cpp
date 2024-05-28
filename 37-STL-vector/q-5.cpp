/*Find largest and smallest elements in a vector*/
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
    
    cout<<"max element : "<<*max_element(a.begin(),a.end());
    cout<<endl;
    cout<<"min element : "<<*min_element(a.begin(),a.end());
    
}