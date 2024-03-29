/*In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.

Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.
*/
#include <iostream>
using namespace std;
class Customer
{
    protected:
    char name[20];
    long long phone_no;

};
class Depositor :public Customer
{
    protected:
    long long accno;
    long long balance;
};
class Borrower:public Depositor
{
    protected:
    int loan_no;
    long long loan_amount;
    public:
    void get_details()
    {
        
        cout<<"\nEnter Customer Name : ";
        cin>>name;
        cout<<"\nEnter Phone no. : ";
        cin>>phone_no;
        cout<<"Enter account number : ";
        cin>>accno;
        cout<<"Enter balance : ";
        cin>>balance;
        cout<<"Enter loan_no.";
        cin>>loan_no;
        cout<<"Enter loan amount";
        cin>>loan_amount;
    }
    void show_details()
    {
        cout<<"Details of Customer\n";
        cout<<"\n-----------------------\n";
        cout<<"Costomer Name is "<<name;
        cout<<"\nPhone number is "<<phone_no;
        cout<<"\nAccount number is "<<accno;
        cout<<"\nBalance is "<<balance;
        cout<<"\n-----------------------\n";
        cout<<"\nLoan number is "<<loan_no;
        cout<<"\nLoan Amount is "<<loan_amount;
        cout<<"\n-----------------------\n";
    }
};
int main()
{
    Borrower a[50];
    int n,i;
    cout<<"Enter No. of customer details you wat to enter : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a[i].get_details();
    }
    for(i=1;i<=n;i++)
    {
        a[i].show_details();
    }
}