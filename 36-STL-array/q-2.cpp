//Using STL Array returns the total number of elements in the array.
#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};
    array<char,12> name {"Ritik Pawar"};
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
    int count=0;
    for(auto i:values)
    {
        cout<<i<<" ";
        count++;
    }
    cout<<"\ntotal number of elements are"<<count;
    cout<<endl;
    for(char i:name)
    {
        cout<<i<<"";
        
    }
    cout<<endl;
    
    return 0;

}