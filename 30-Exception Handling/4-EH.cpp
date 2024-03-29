/*Write a C++ program to accept an email address and throw an exception
 if it does not contain @ symbol*/
#include <iostream>
using namespace std;
bool check(char *email)
{
    int AtOffset = -1;
    int DotOffset= -1;
    int length   =  0;
    for(int i = 0;email[i]!='\0';i++)
    {
        if(email[i] =='@')
            AtOffset = i;
        else if(email[i]=='.')
            DotOffset = i;
        length ++;

    }
    if(AtOffset==-1|| DotOffset == -1)
        return 0;
    if(AtOffset>DotOffset)
        return 0;
    return !(DotOffset>=(length-1));        
}
int main()
{
    char email[100];

    
        cout<<"\n Enter email address  : "<<endl;
        gets(email);
    try
    {
        if(check(email))
        {
            cout<<"Valid Email"<<endl;
        }else
        {
            throw 1;
        }
    }
    catch(int n)
    {
        cout<<"Invalid Email"<<endl;
    }
     
}