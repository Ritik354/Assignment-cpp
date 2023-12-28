/*Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor*/
#include <iostream>
using namespace std;
class Bank
{
    private:
    int principal;
    int interest;
    int years;
    public:
    static int rate;
    Bank(int x,int y)
    {
        cout<<"parameterismed const called"<<endl;
        principal   = x;
        years        = y;
    }
    void calcInterest()
    {
        interest = (principal*rate*years)/100;
    }
    int showInterest()
    {
        return interest;
    }
};
int Bank::rate = 9;
int main()
{
    Bank p1(5000,5);
    p1.calcInterest();
    cout<<"interest is "<<p1.showInterest()<<endl;
    return 0;
}