/*Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol*/
#include <iostream>
using namespace std;
int length=0,i;
int digit = 0,sChar = 0;
bool check(char *p)
{
    for(i=0;p[i]!='\0';i++)
    {
    
        if(p[i]>='0'&&p[i]<='9')
            digit++;
        else if(p[i]>='a'&&p[i]<='z'||p[i]>='A'&&p[i]<='Z')
            length++;    
        else if(p[i]=='*'||p[i]=='#'||p[i]=='@'||p[i]=='!'||p[i]=='$'||p[i]=='%'||p[i]=='^') 
            sChar++;       
    }
    if(length<6)
        cout<<"Username must contain character atleast 6"<<endl;
    if(digit==0)
        cout<<"Username must contain a digit (0-9)"<<endl;
    if(sChar==0)
        cout<<"Username must contain a special character(%,^,&,*,!,$,#,@)"<<endl;            
    if(length>=6&&digit>0&&sChar>0)
    {
        return 1;
    }else
        return 0;
}
int main()
{
    char uname[50];
    cout<<"enter username : ";
    gets(uname);
    
    try
    {
        if(check(uname)==1)
        {
            cout<<"Valid Username"<<endl;
        }
        else
            throw 1;
    }
    catch(int n)
    {
        cout<<"Invalid Username"<<endl;
    }
    
    
    return 0;
}