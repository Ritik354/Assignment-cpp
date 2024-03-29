/*1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary*/

#include <iostream> 
#include <cstring>
using namespace std;
class Person
{
    
    char name[20];
    int age;
    public:
    void setName(const char *s)
    {
        strcpy(name,s);
    }
    void setAge(int a)
    {
        age = a;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {return age;}
};
class Employee:public Person
{
    private:
    int empid;
    float salary;
    public:
    void setEmpid(int i)
    {empid = i;}
    void setSalary(int s)
    {salary = s;}
    int getEmpid()
    {return empid;}
    int getSalary()
    {return salary;}
};
int main()
{
    Employee E1;
    E1.setName("Ritik Pawar");
    E1.setAge(20);
    E1.setEmpid(123);
    E1.setSalary(100000);
    cout<<"Employee Name = "<<E1.getName()<<endl;
    cout<<"Employee Age = "<<E1.getAge()<<endl;
    cout<<"Employee ID = "<<E1.getEmpid()<<endl;
    cout<<"Employee Salary = "<<E1.getSalary()<<endl;
    return 0;
}