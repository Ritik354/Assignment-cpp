/*Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include <iostream>
using namespace std;
class Person
{
    protected:
    char name[20];
    char address[20];
    long long phone_no;
    public:

};
class Employee:public Person
{
    protected:
    int eno;
    public:
    string ename;
};
class Manager:public Employee
{
    protected:
    char designation[20];
    char department_name[20];
    
    public:
    float basic_salary;
    void acceptDetails()
    {
        cout<<"\n Enter Details of Manager ";
        cout<<"\n----------------------------- ";
        cout<<"\n Enter Employee No. : ";
        cin>>eno;
        cout<<"\n Enter name : ";
        cin>>ename;
        cout<<"\n Enter Address : ";
        cin>>address;
        cout<<"\n Enter Phone No. : ";
        cin>>phone_no;
        cout<<"\n Enter Designation : ";
        cin>>designation;
        cout<<"\n Enter Department Name : ";
        cin>>department_name;
        cout<<"\n Enter Basic Salary";
        cin>>basic_salary;
        
    }
};
int main()
{
    int i,count,temp;
    Manager man[100];
    cout<<"\n How many Manager you want to Enter ? : ";
    cin>>count;
    for(i=1;i<=count;i++)
    {
        man[i].acceptDetails();
    }
    temp=0;
    for(i=1;i<=count;i++)
    {
        if(man[temp].basic_salary<man[i].basic_salary)
        temp =i;
    }
    cout<<"\n Manager with highest salary is : "<<man[temp].basic_salary;
    cout<<"\n And,Manager Name is : "<<man[temp].ename;
    return 0;

}