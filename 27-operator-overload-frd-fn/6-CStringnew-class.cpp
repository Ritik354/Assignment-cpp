/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings*/
#include <iostream>
#include <cstring>
using namespace std;
class CString
{

    public:
    char a[20];
    CString()//default constructor
    {}
    
    CString(const CString &s)//copy construtor
    {
        strcpy(a,s.a);
    }
    CString operator+(const CString &c)//concanate
    {
        CString temp;
        strcpy(temp.a,a);
        strcat(temp.a,c.a);
        return temp;
        
    }
    int operator==(CString &c)//equal to
    {
        for(int i= 0;a[i]!='\0';i++)
        {
            if(a[i]!=c.a[i])
            {
                return 0;
                break;
            }
        }
        return 1;
    }
    void getString()//get string
    {
        cin>>a;
    }
    void display()
    {
        cout<<"String = "<<a<<endl;
    }
    
};
int main()
{
    CString c1,c2;
    cout<<"Enter first string : ";
    c1.getString();
    cout<<"Enter Second string : ";
    c2.getString();
    if(c1==c2)
    {
        cout<<"strings are same"<<endl;
    }else
    {
        cout<<"strings are not same"<<endl;
    }
    CString c3 =c1 + c2;//concatenate two strings
    cout<<endl<<"First String"<<endl;
    c1.display();
    cout<<endl<<"Second String"<<endl;
    c2.display();
    cout<<endl<<"concatenate String"<<endl;
    c3.display();
    
    return 0;
}