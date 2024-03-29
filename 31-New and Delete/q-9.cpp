/*Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/
#include <iostream>
using namespace std;
class student
{
    protected:
    int id;
    char name[20];
};
class studentExam :public student
{
    protected:
    int physics,bio;
    int chem,maths,hindi,english;
};
class studentResult:public studentExam
{
    protected:
    float percentage;
    float totalMarks;
    public:
    void percentage_calc()
    {
        totalMarks = (chem+physics+maths+hindi+english);
        percentage = totalMarks/5;
    }
    void get_Details()
    {
        cout<<"\nEnter student id : ";
        cin>>id;
        cout<<"\nEnter student name : ";
        cin>>name;
        cout<<"\nEnter marks ";
        cout<<"\nEnglish : ";
        cin>>english;
        cout<<"\nhindi : ";
        cin>>hindi;
        cout<<"\nmaths : ";
        cin>>maths;
        cout<<"\nphysics : ";
        cin>>physics;
        cout<<"\nchem : ";
        cin>>chem;
        
    }
    void show_Details()
    {
        cout<<"\n-----------------------------\n";
        cout<<"\nStudent id : "<<id;
        cout<<"\nStudent name : "<<name; 
        cout<<"\nTotal marks : "<<totalMarks; 
        cout<<"\nPercentage : "<<percentage; 
        
    }
};
int main()
{
    studentResult s[10];
    int n,i;
    cout<<"Enter how many students details you want to enter : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        s[i].get_Details();
        s[i].percentage_calc();
    }
    for(i=1;i<=n;i++)
    {
        s[i].show_Details();
    }
}
