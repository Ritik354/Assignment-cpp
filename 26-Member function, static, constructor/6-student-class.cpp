/*Define a class student and write a program to enter student details using constructor
and define member function to display all the details*/
#include <iostream>
#include <cstring>
using namespace std;
class student
{
    private:
    char name[20];
    int rollno;
    int marks;
    public:
    student(const char x[],int y,int z)
    {
        cout<<"parameterised const called"<<endl;
        strcpy(name,x);
        rollno = y;
        marks = z;
    }
    void showData()
    {
        cout<<"name is "<<name<<" rollno is "<<rollno<<" marks is "<<marks<<endl;
    }

};
int main()
{
    student s1("Ritik",103,45);
    s1.showData();
    return 0;
}
