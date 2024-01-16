/*Create two class Time and Minute and add required getter and setter including constructors.
Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
*/
#include <iostream>
using namespace std;


class Time
{
    int hrs;
    int min1;
    public:
    Time(int x,int y)
    {
        hrs = x;
        min1 = y;
    }
    void display()
    {
        cout<<"hrs = "<<hrs<<"Minutes = "<<min1<<endl;
    }
    int getMIn()
    {
        return min1;
    }
};
class Minute{
    int min2;
    public:
    Minute(int x)
    {
        min2 = x;
    }
    Minute(Time t)
    {
        min2 = t.getMIn();
    }
    void display()
    {
        cout<<"Minutes = "<<min2<<endl;
    }
};
int main()
{
 Time t1(2,30);
 t1.display();
 Minute m1(50);
 m1.display();
 m1=t1; // Fetch minute from time
 t1.display();
 m1.display();
 return 0;
}