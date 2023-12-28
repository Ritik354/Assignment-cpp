/*Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit.
*/
#include <iostream>
using namespace std;
class Bill
{
    private:
    int id;
   
    float amount,unit;
    public:
    void get()
    {
        cout<<"Enter bill number :"<<endl;
        cin>>id;
        cout<<"Enter unit consumed "<<endl;
        cin>>unit;

    }
    void calculateBill()
    {
        if(unit<0)
        {
            cout<<"invalid input"<<endl;
            return;
        }
        if(unit<=100)
        {
            amount = unit * 1.20;
        }else if(unit<=200)
        {
            amount = unit * 2;
        }else
            amount = unit * 3;

    }
    int getamount()
    {
        return amount;
    }

};
int main()
{
    Bill b1;
    b1.get();
    b1.calculateBill();
    cout<<"Electricity bill amount is "<<b1.getamount()<<" Rupees "<<endl;

    return 0;
}