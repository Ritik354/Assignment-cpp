/*Write a C++ program to accept Nickname and throw an exception if it has greater than 8
characters or does contain a digit or special symbol or space.*/
#include <iostream>
using namespace std;
int length=0,i,space=0;
int digit = 0,sChar = 0;
bool check(char *p)
{
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]>='A'&&p[i]<='Z'||p[i]>='a'&&p[i]<='z')
        {
            length++;
        }
        else if(p[i]>='0'&&p[i]<='9')
            digit++;
        else if(p[i]==' ')
            space++;    
        else if(p[i]=='*'||p[i]=='#'||p[i]=='@'||p[i]=='!'||p[i]=='$'||p[i]=='%'||p[i]=='^') 
            sChar++;       
    }
    if(length>8)
        cout<<"nickname should contain atmost 8 character"<<endl;
    if(space > 0)
        cout<<"nickname should not contain space"<<endl;
    if(digit>0)
        cout<<"nickname should not contain digit (0-9)"<<endl;
    if(sChar>0)
        cout<<"nickname should not contain special character(%,^,&,*,!,$,#,@)"<<endl;            
    if(length<=8&&space==0&&digit==0&&sChar==0)
    {
        return 1;
    }else
        return 0;
}
int main()
{
    char nName[50];
    cout<<"enter username : ";
    gets(nName);
    
    try
    {
        if(check(nName)==1)
        {
            cout<<"Valid nickname"<<endl;
        }
        else
            throw 1;
    }
    catch(int n)
    {
        cout<<"Invalid nickname"<<endl;
    }
    
    
    return 0;
}