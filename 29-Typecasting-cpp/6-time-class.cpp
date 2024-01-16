/*Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in
int ) to Time class*/
#include <iostream>
using namespace std;
class Time
{
    int hrs,min,sec;
    public:
    Time(int x)
    {
        hrs = x/3600;
        sec = x%3600;
        min = sec / 60;
        sec = sec % 60;
    }
    void display()
    {
        cout<<"hours = "<<hrs<<" minutes = "<<min%60<<"sec = "<<sec<<endl;
    }
};
int main()
{
 int duration;
 cout<<"Enter time duration in minutes";
 cin>>duration;
 Time t1 = duration;
 t1.display();
 return 0;
}
