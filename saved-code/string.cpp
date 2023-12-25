#include <iostream>
#include<cstring>
using namespace std;

class myString
{
    char *a;
    int size;

public:
    myString()
    {
        cout<<"Default Called"<<endl;
        a = (char *)malloc(1);
        size = 1;
    } 
    myString (const char * str)
    {
        cout<<"String Constructor called"<<endl;
        size = strlen(str);
        a = (char *)malloc(size +1);
        strcpy(a,str);
    }
    myString(const myString &s)//deep copy
    {
        cout<<"copy Constructor called"<<endl;
        size = strlen(s.a);
        a = (char *)malloc(size +1);
        strcpy(a,s.a);
    }
    void display()
    {
        cout<<a<<endl;

    }
    void change(const char * s)
    {
        free(a);
        size = strlen(s);
        a = (char *)malloc(size + 1);
        strcpy(a,s);
    }
    myString &operator=(const myString &s)//deep copy
    {
        
        cout<<"Assignment Operator called"<<endl;
        if(a == s.a)
        {
            return *this;
        }
        free(a);//for asignment we need to free existing loaction
        size = strlen(s.a);
        a = (char *)malloc(size +1);
        strcpy(a,s.a);
        return *this;
    }
};

int main()
{
    myString s1("ritik");
    myString s2 = s1 ;
    myString s3;
    myString s4("MySirg");
    myString s5;
    s3 = s1;
   
    s1 = s1;
     s5 = s4 = s1;
    s1.change("pawar");
    s1.display();
    s2.display();
    s3.display();
    s4.display();
}