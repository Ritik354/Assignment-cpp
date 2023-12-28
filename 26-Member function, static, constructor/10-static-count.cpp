/*Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the resul*/
#include <iostream>
using namespace std;
class StaticCount
{
    private:
    int k;
    
    public:
    static int count;
    StaticCount(int x)
    {
        cout<<"parameterised const called"<<endl;
        k = x;
        count++;
    }
    

};
int StaticCount::count = 0;
int main()
{
    StaticCount c1(5),c2(4),c3(3);
    cout<<"StaticCount value is "<<c1.count<<endl;
    return 0;  
}