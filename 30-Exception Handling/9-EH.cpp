/*Write a C++ program to accept Gmail id only and throw an exception if the id does not
contain @ and gmail.com*/
#include <iostream>
#include <cstring>
using namespace std;
int i,j;
int sChar = 0;
char a[12]="@gmail.com",b[12];
bool check(char *p)
{
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]=='@')
        {
            sChar ++;
           for(i=i+1;p[i]!='\0';i++)
            {
                int n=-1;
                b[n+1]=p[i];
                cout<<b[n];
            }
        }      
    }
    if(sChar==0)
    {
        return 0;
    }       
    if(strcmp(a,b)>0)
    {
        return 1;
    }else
        return 0;
}
int main()
{
    char Gmail[50];
    cout<<"enter username : ";
    gets(Gmail);
    try
    {
        if(check(Gmail)==1)
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