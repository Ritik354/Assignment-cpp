/*Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.
*/
#include <iostream>
using namespace std;
class Item
{
    public:
    int item_no;
    char name[20];
    double price;
};
class Discounted_Item:public Item
{

public:
int disconted_percent;
int discounted_price;

void get_Details()
{
    cout<<"\nEnter item number ";
    cin>>item_no;
    cout<<"\n Enter item name : ";
    cin>>name;
    cout<<"\n Enter Item price : ";
    cin>>price;
    
    cout<<"\n Enter Discount Percent : ";
    cin>>disconted_percent;
    cout<<"-----------------------------";
    discounted_price = price*disconted_percent/100;
    cout<<discounted_price;
}
    void display_Details()
    {
        cout<<"\nItem name "<<name;
        cout<<"\nItem no. "<<item_no;
        cout<<"\nItem price "<<price;
        cout<<"\nDiscount percent"<<disconted_percent;
        cout<<"\nDiscounted price"<<discounted_price;
        
    }
    
    
};

int main()
{
    int count,i;
    float discount=0;
    int total_price=0;
    Discounted_Item item[100];
    
    cout<<"Enter number of items to enter : ";
    cin>>count;
    for(i=1;i<=count;i++)
    {
        item[i].get_Details();

    }
    for(i=1;i<=count;i++)
    {
        item[i].display_Details();
    }
    for(i=1;i<=count;i++)
    {
        discount = discount + item[i].discounted_price;
    }
    for(i=1;i<=count;i++)
    {
        total_price = total_price+ item[i].price;
    }
    cout<<"\nTotal Price : "<<total_price;
    cout<<"\nTotal Discount : "<<discount;
    cout<<"\n Total Payable amount : "<<total_price - discount;
    return 0;
}