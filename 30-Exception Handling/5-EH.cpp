/*Write a C++ program to accept a mobile number and throw an exception if it does not
contain 10 digits.*/
#include <iostream>
using namespace std;

int main()
{
        int num;

        cout<<"\n Enter number   : "<<endl;
        cin>>num;
        int count = 0;
        while(num)
        {
            cout<<num%10<<endl;
            num = num /10;
            count++;
            if(count==11)
                throw 0;
        }
    try
    {
        if(count==10)
        {
            throw 0;
            
        }else
        {
            throw 1;
        }
    }
    catch(int n)
    {
        if(n==0)
        {
            cout<<"Valid number"<<endl;
        }
        else
            cout<<"Invalid number"<<endl;
    }
     
}