#include <iostream>
#include <array>
using namespace std;
int mul(array<int,5> a,int num)
{
    int result=1;
    for(int i=0;i<a.size();i++)
    {
        if(num == a[i])
        {
            continue;
        }
        result = result* a[i];
    }
    return result;
}
int main()
{
    array<int,5> a {1,4,3,7,7};
    int num = 7;
    int result = mul(a,num);
    cout<<"result = "<<result;

}