/*Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.*/
#include<iostream>
using namespace std;

class Time
{
    private:
    int hr;
    int min;
    int sec;
    public:
    void setdata(int a,int b,int c)
    {
        hr=a;
        min=b;
        sec=c;

    }
    void display(Time t)
    {
        cout<<hr<<" hrs "<<min<<" min "<<sec<<" sec "<<endl;
        cout<<t.hr<<" hrs "<<t.min<<" min "<<t.sec<<" sec "<<endl;
    }
};

int main()
{
    Time t1,t2;
    t1.setdata(1,35,40);
    t2.setdata(5,55,60);
    t1.display(t2);
    return 0;
}