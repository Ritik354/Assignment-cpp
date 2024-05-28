/*Declare a vector without initialization, insert some elements and print*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;

    for(int i=1;i<10;i++)
    {
        a.push_back(i*100);
    }
    cout<<endl;
    vector<int> :: iterator x;
    for(x = a.begin();x!=a.end();x++)
    {
        cout<<*x<<" ";
    }
    
}
