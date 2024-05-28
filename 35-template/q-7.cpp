#include <iostream>
using namespace std;
class test
{
    public:
    float sub(float a[],int length)
    {
        float min = 0;
        cout<<"/nparent";
        for(int i=0;i<length;i++)
        {
            min = min + a[i];
        }
        return min;
    }
    
};
template<class n1,class R>
class Add:public test
{   public:
    R add(n1 a[],int length)
    {
        n1 min = 0;
        cout<<"\nchild";
        for(int i=0;i<length;i++)
        {
            min = min + a[i];
        }
        return min;
    }
};
int main()
{
    Add <int,int> s;
    Add <float,float> k;
    int a[10]= {1,2,3,4,5,6,7,8,9,10};
    float b[10]= {1,2,3,4,5,6,7,8,9,10};

    cout<<"SUM is "<<s.add(a,10);
    cout<<"SUM is "<<k.sub(b,10);
}