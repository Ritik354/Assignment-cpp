/*Write a C++ Program to find Sum of Array using function template*/
#include <iostream>
using namespace std;

template<class n1,class R>
class Add:public test
{   public:
    R add(n1 a[],int length)
    {
        n1 min = 0;
        for(int i=0;i<length;i++)
        {
            min = min + a[i];
        }
        return min;
    }
};
int main()
{
    Add <int,float> s;
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    cout<<"SUM is "<<s.add(a,10);
}