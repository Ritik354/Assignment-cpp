/*Define a class Date and write a program to Display Dateand initialise date object
using Constructors.*/
#include <iostream>
using namespace std;
class Date
{
    private:
    float day;
    float month;
    float year;
    
    public:
    
    Date(int x,int y,int z)
    {
        cout<<"parameterised const called"<<endl;
        day   = x;
        month = y;
        year  = z;
    }
    void displayDate()
    {
        cout<<"Day is "<<day<<" month is "<<month<<" year is "<<year<<endl;
    }
};
int main()
{
    Date d1(29,12,2023);
    Date d2(01,01,2024);
    Date d3(3,5,2004);
    d1.displayDate();
    d2.displayDate();
    d3.displayDate();
    return 0;  
}
