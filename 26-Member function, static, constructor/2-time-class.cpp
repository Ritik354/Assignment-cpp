/*Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time)*/
#include <iostream>
using namespace std;
class Time
{   
    private:
    int h,m,s;
    public:
    void setTime(int x,int y,int z)
    {
        h = x;
        m = y;
        s = z;
    }
    void showTime()
    {
        cout<<"hour = "<<h<<" minute = "<<m<<" second = "<<s<<endl;
    }
    void normalize()//doubt
    {
        if(s>60)
        {
            m=m+s/60;
            s=s%60;
            
        }
        if(m>60)
        {  
            h= h+ m/60;
            m=m%60;
        }
       
    }
    Time add(Time t)
    {
        Time temp;
        temp.h = h + t.h;
        temp.m = m + t.m;
        temp.s = s + t.s;
        return temp;
    }
};
int main()
{
    Time t1,t2,t3;
    t1.setTime(5,54,125);
    t2.setTime(25,45,60);
    t1.normalize();
    t2.normalize();
    t3 = t1.add(t2);
    
    t3.normalize();
    t1.showTime();
    t2.showTime();
    t3.showTime();
    return 0;  
}
