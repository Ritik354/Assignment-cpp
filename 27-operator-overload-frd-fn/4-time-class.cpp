/*Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time*/
#include <iostream>
using namespace std;
class Time
{
    private:
    int Hours;
    int Minutes;
    int Seconds;
    int tot;
    int tot1;
    public:
    Time()
    {
       
    }
   
   Time(const Time &t)
    {

    }
    int operator==(Time t)
    {
        
        tot = Hours*3600 + Minutes*60 + Seconds;
        tot1= Hours*3600 + Minutes*60 + Seconds;//doubt 
        cout<<endl<<tot<<endl;
        cout<<endl<<tot1<<endl;
        if(tot==tot1)
        {
            return 1;
        }else
        {
            return 0;
        }
            
    }    
    
    friend int operator<<(ostream &output,Time &t)
    {
        output<<endl<<"Hours   : "<<t.Hours;
        output<<endl<<"Minutes : "<<t.Minutes;
        output<<endl<<"Seconds : "<<t.Seconds;
        t.Minutes = t.Minutes + t.Seconds/60;
        t.Seconds = t.Seconds%60;
        t.Hours = t.Hours + t.Minutes/60;
        t.Minutes = t.Minutes%60;
    }
    friend int operator>>(istream &input,Time &t)
    {
        
        cout<<endl<<"Hours   : ";
        input>>t.Hours  ;
        cout<<endl<<"Minutes : ";
        input>>t.Minutes;
        cout<<endl<<"Seconds : ";
        input>>t.Seconds;
        if(t.Hours>24)
        {
            return 1;

        }else
            return 0;
        
    }
};
int main()
{
    Time t1,t2;
    int t;
    /*t1.getFTime();
    t1.displayFTime();
    t2.getSTime();
    t2.displaySTime();*/
    cout<<endl<<"Enter first time"<<endl;
    if(cin>>t1)
    {
        cout<<"Invalid input"<<endl;
        return 0;
    }

    cout<<"First time"<<endl;
    cout<<t1;
    cout<<endl<<"Enter second time"<<endl;
    if(cin>>t2)
    {
        cout<<"Invalid input"<<endl;
        return 0 ;
    }
    cout<<"Second time"<<endl;
    cout<<t2;
    if(t1==t2)
    {
        cout<<"same time"<<endl;
        
    }else
    {
        cout<<"different time"<<endl;
    }


    return 0;
}