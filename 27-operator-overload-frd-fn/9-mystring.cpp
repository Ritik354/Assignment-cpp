/*Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include <iostream>
#include <cstring>
using namespace std;
class mystring
{
    private:
    char str[100];
    public:
    void getString()
    {
        cout<<"Enter a string : ";
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    void operator!()
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]>=65&&str[i]<=90)
            {
                str[i] = str[i] +32;
            }else if(str[i]>=97&&str[i]<=122)
            {
               str[i] = str[i] -32; 
            }
        }
    }
};
int main()
{
    mystring s;
    s.getString();
    cout<<"Entered string is : "<<endl;
    s.display();
    cout<<endl<<"converted string is : "<<endl;
    s.operator!();
    s.display();
    return 0;
}