/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings*/
#include <iostream>
#include <cstring>
using namespace std;
class CString
{
    private:
    char *a;
    int size;
    public:

    CString()//default constructor
    {
        
    }
    CString(const char *str)//paramaterised const
    {
        size = strlen(str);
        a = (char*)malloc(size+1);
        strcpy(a,str);
    }
    CString(const CString &s)//copy construtor
    {
        size = strlen(s.a);
        a = (char*)malloc(size+1);
        strcpy(a,s.a);
    }
    CString operator+(const CString &c)
    {
        CString temp;
        size = strlen(a) + strlen(c.a);
        temp.a = (char *)malloc(size +1);
        strcpy(temp.a,a);
        strcat(temp.a,c.a);
        return temp;
        
    }
    CString & operator  =(const CString &s)//=operator overload assignment
    {
        if(a==s.a)//do not copy
        {
            return *this; 
        }
        else
        {
            free(a);//to free existing location
            size = strlen(s.a);
            a = (char*)malloc(size+1);
            strcpy(a,s.a);
            return *this;
        }
        
        
    }
    int operator==(CString &c)
    {
        for(int i= 0;i<size-1;i++)
        {
            if(a[i]!=c.a[i])
            {
                return 0;
                break;
            }
        }
        return 1;
    }
    void display()
    {
        cout<<"String = "<<a<<endl;
    }
    
};
int main()
{
    CString c1("Ritik "),c2("Pawar"),c4,c5;
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