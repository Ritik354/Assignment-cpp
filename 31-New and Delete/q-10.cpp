/*Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.*/
#include <iostream>
using namespace std;
class worker
{
    protected:
    int code;
    char name[20];
    float salary;
};
class officer
{
    protected:
    float DA;
    float HRA;
};
class manager : public worker,officer
{
    protected:
    float TA;
    float gross_salary;
    public:
    void get_Details()
    {
        cout<<"Enter code   : ";
        cin>>code;
        cout<<"\nEnter Name : ";
        cin>>name;
        cout<<"Enter salary : ";
        cin>>salary;
        cout<<"\nEnter DA   :";
        cin>>DA;
        cout<<"\nEnter HRA  : ";
        cin>>HRA;
    }
    void show_Details()
    {
        cout<<"\nCode : "<<code;
        cout<<"\nName : "<<name;
        cout<<"\nSalary : "<<salary;
        cout<<"\nDA   : "<<DA;
        cout<<"\nHRA  : "<<HRA;
        TA = salary/10;
        cout<<"\nTA   : "<<TA;
        cout<<"\ngross salary : "<<(salary+HRA+DA+TA);
    }
};
int main()
{
    manager m[10];
    int i,n;
    cout<<"\nEnter how many manager details you want to enter";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        m[i].get_Details();

    }
    cout<<"---------------------";
    cout<<"Manager information";
    cout<<"---------------------";
    for(i=1;i<=n;i++)
    {
        m[i].show_Details();

    }

}