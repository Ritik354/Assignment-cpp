/*Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter*/
#include <iostream>
using namespace std;
int length=0,i;
int Alpha = 0,digit = 0,sChar = 0;
bool check(char *p)
{
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]>='A'&&p[i]<='Z')
        {
            Alpha ++;
            length++;
        }
        else if(p[i]>='0'&&p[i]<='9')
            digit++;
        else if(p[i]>='a'&&p[i]<='z')
            length++;    
        else if(p[i]=='*'||p[i]=='#'||p[i]=='@'||p[i]=='!'||p[i]=='$'||p[i]=='%'||p[i]=='^') 
            sChar++;       
    }
    if(length>=6)
        cout<<"password must contain character atleast 6"<<endl;
    if(Alpha == 0)
        cout<<"password must contain a capital letter"<<endl;
    if(digit==0)
        cout<<"password must contain a digit (0-9)"<<endl;
    if(sChar==0)
        cout<<"password must contain a special character(%,^,&,*,!,$,#,@)"<<endl;            
    if(length>=6&&Alpha>0&&digit>0&&sChar>0)
    {
        return 1;
    }else
        return 0;
}
int main()
{
    char pass[10],uname[50];
    cout<<"enter username : ";
    gets(uname);
    cout<<"Enter Password : ";
    gets(pass);
    try
    {
        if(check(pass)==1)
        {
            cout<<"Valid Password"<<endl;
        }
        else
            throw 1;
    }
    catch(int n)
    {
        cout<<"Invalid Password"<<endl;
    }
    
    
    return 0;
}