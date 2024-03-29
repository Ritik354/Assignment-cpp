/*Write a C++ program to accept area pin code and throw an exception if it does not
contain 6 digits.*/
#include <iostream>
using namespace std;

int main()
{
    int num;

        cout<<"\n Enter pin code   : "<<endl;
        cin>>num;
    try
    {
        int count = 0;
        while(num)
        {
            num = num /10;
            count++;
           
        
        }
        if(count==6)
        {
            throw 1;
            
        }else
        {
            throw 0;
        }
    }
    catch(int n)
    {
        if(n)
        {
            cout<<"Valid pin code"<<endl;
        }
        else
            cout<<"Invalid pin code"<<endl;
    }
     
}