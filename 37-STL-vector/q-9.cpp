#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float> a;
    int n;
    float value;
    cout<<"Enter number of elements to enter";
    cin>>n;
    
    
    for(float i=0;i<n;i++)
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