//Using STL Array gets and sets a reference to an element based on a given index
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};
    cout<<"element at index 0: "<<values[0]<<endl;
    cout<<"element at index 1: "<<values[1]<<endl;
    cout<<"element at index 2: "<<values[2]<<endl;
    cout<<"element at index 3: "<<values[3]<<endl;
    cout<<"element at index 4: "<<values[4]<<endl;
    //changing value
    values[0] = 100;
    values[4] = 500;
    cout<<"element at index 0: "<<values[0]<<endl;
    cout<<"element at index 4: "<<values[4]<<endl;
    //printing all elements
    cout<<"All elements :"<<endl;
    for(int i:values)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    array<char,5> c {'R','i','t','i','k'};
    for(char c:c)
    {
        cout<<c;
    }
    cout<<endl;
    array<string,5> cp {"Pawar"};
    for(string s:cp)
    {
        cout<<s;
    }
    return 0;

}