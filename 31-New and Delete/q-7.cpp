#include <iostream>
using namespace std;
class Employee
{
    protected:
    int emp_code;
    char name[20];
    
};
class Fulltime : public Employee
{
    protected:
    int daily_rate ;
    int number_of_days ;
    
    long long salary ;
    public:
    void get_FT_details()
    {
        cout<<"Enter Employee name";
        cin>>name;
        cout<<"Enter employee code";
        cin>>emp_code;
        cout<<"Enter daily Rate";
        cin>>daily_rate;
        cout<<"Enter number of work days";
        cin>>number_of_days;
        
        
    }
    int get_code()
    {
        return emp_code;
    }
    void show_FT_details()
    {
        cout<<"\nEmployee name : "<<name;
        cout<<"\nEmployee code : "<<emp_code;
        cout<<"\nDaily Rate : "<<daily_rate;
        cout<<"\nNumber of work days : "<<number_of_days;
        cout<<"\nSalary : "<<daily_rate*number_of_days;
        cout<<"Status : Full Time";
    }
};
class Parttime : public Employee
{
    protected:
    int no_of_workhrs ;
    int hourlyrate ;
    long long salary ;
    public:
    void get_PT_details()
    {
        cout<<"Enter Employee name";
        cin>>name;
        cout<<"Enter employee code";
        cin>>emp_code;
        cout<<"Enter number of work hours";
        cin>>no_of_workhrs;
        cout<<"Enter hourly rate";
        cin>>hourlyrate;
        
    }
    int get_code()
    {
        return emp_code;
    }
    void show_PT_details()
    {
        cout<<"\nEmployee name : "<<name;
        cout<<"\nEmployee code : "<<emp_code;
        cout<<"\nEmployee salary : "<<no_of_workhrs*hourlyrate;
        cout<<"\nNumber of working hrs : "<<no_of_workhrs;
        cout<<"\nHourly rate : "<<hourlyrate;
        cout<<"Status : Part Time";
    }
};  
int main()
{
    int n,i,check,p_count=0,f_count=0,flag=0,q=1;
    Parttime p[20];
    Fulltime f[20];
    while(q>0)
    {
    cout<<"\n---------------------------------\n";
    cout<<"1.Enter record \n";
    cout<<"2.Display Record \n";
    cout<<"3. Search Record \n";
    cout<<"4.Quit\n";
    cout<<"Enter your choice : ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"Enter number of full time employee : ";
        cin>>f_count;
        cout<<"Enter number of part time employee : ";
        cin>>p_count;


        cout<<"\n Enter Full time employee details\n";

        for(i=1;i<=f_count;i++)
        {
            f[i].get_FT_details();
    
        }   
        cout<<"\n Enter Part time employee details\n";
        for(i=1;i<=p_count;i++)
        {
            p[i].get_PT_details();
        }
        break;
    case 2:
            cout<<"\n---------------------------------\n";
        for(i=1;i<=f_count;i++)
        {
            f[i].show_FT_details();

        }
        cout<<"\n---------------------------------\n";
        cout<<"\n---------------------------------\n";
        for(i=1;i<=p_count;i++)
    {
        p[i].show_PT_details();
    }
        cout<<"\n---------------------------------\n";
        break;
    case 3:
        
        cout<<"Enter employee type 1 for full time or 0 for part time";
        cin>>n;
        cout<<"\nEnter which employee detail you want to search : ";
        cin>>check;
        if(n==1)
        {
            for(i=1;i<=f_count;i++)
            {
                if(f[i].get_code()==check)
                {
                    f[i].show_FT_details();
                    flag++;
                }
                if(flag<1)
                {
                    cout<<"Record not found";
                }

            }
        }else
        {
            for(i=1;i<=f_count;i++)
            {
                if(p[i].get_code()==check)
                {
                    p[i].show_PT_details();
                    flag++;
                }
                if(flag<1)
                {
                    cout<<"Record not found";
                }

            }
        }
        break;
    case 4:
        q=0;
        break;
    default:
        break;
    }
    }
    
    
    
}