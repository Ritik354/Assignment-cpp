#include <iostream>
using namespace std;

class Array
{   
    private:
    int a[50];
    const int size = 50;
    public:
    Array()
    {

    }
    void setArray(int n,int index)
    {
        a[index] = n;
    }
    void display(int index)
    {
        cout<<a[index]<<endl;
    }
    int operator[](int index)
    {
        if(index > size )
        {
            cout<<"Array out of bond exception"<<endl;
            exit (0);
        }
        return a[index];
    }
};
int main()
{
    Array a1,a2;
    a1.setArray(5,10);
    a1.display(10);
    cout<<a1[100];           
}
