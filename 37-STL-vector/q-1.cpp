/*Declare a vector with Initialization and print the elements.*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a {1,2,3,4,5};

    vector<int> :: iterator x;
    for( x = a.begin();x!=a.end();x++)
    {
        cout<<*x<<" ";
    }
    
    
}
