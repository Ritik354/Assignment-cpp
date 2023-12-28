/*Define a class Counter and Write a program to Show Counter using Constructor.
*/
#include <iostream>
using namespace std;
class Counter
{
   
    
    public:
    static int count;
    Counter()
    {
        cout<<"default const called"<<endl;
        count++;
    }
    

};
int Counter::count = 0;
int main()
{
    Counter c1,c2,c3,C4;
    cout<<"Counter value is "<<c1.count<<endl;
    return 0;  
}
