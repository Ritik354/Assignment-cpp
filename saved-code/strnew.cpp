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
    /*friend add operator+(CString *a,CString *b)
    {

    }*/
    void display()
    {
        cout<<"String = "<<a<<endl;
    }
    void change(const char *C)//change string
    {
        free(a);//to free existing location
        size = strlen(C);
        a = (char*)malloc(size+1);
        strcpy(a,C);
    }
};
int main()
{
    CString c1("Ritik"),c2("Pawar"),c4,c5;
    CString c3 =c1;//cpy const called
    c4 = c1;//assignment
    c2 = c1;//assignment
    c1 = c1;//assignment
    c5 = c4 = c1;//assignment
    c1.change("Rohan");
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    return 0;
}