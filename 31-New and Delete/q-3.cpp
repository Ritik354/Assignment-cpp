/*Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students*/
#include <iostream>
using namespace std;
class Marks
{
    protected:
    float a,b,c;
    public:
    
    void setNum(int x,int y,int z)
    {
        a = x;
        b = y;
        c = z;
    }
};
class totalMarks:public Marks
{
    protected:
    int total;
    public:    
    int getSum()
    {
        total = a+b+c;
        return total;
    }
};
class percentage:public totalMarks
{
    public:
    float getPercent()
    {
        return (total)/3.0;
    }
};
int main()
{
    percentage d;
    d.setNum(78,85,63);
    
    cout<<"Total marks obtained = "<<d.getSum()<<endl;
    cout<<"Percentage = "<<d.getPercent()<<endl;
    return 0;
};