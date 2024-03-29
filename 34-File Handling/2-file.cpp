/*Write a C++ program to read a text 
file and count the number of characters in it*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fout,fin;
    fout.open("C:/file/a.txt");
    if(fout)
    {
        cout<<"File created sucessfully";
        fout<<"Ritik Pawar";
        
        fout.close();
    }else
    {
        cout<<"file not created";
    }
    fin.open("C:/file/a.txt");
    fin.seekg(0,ios_base::beg);
    char ch;
    int i,c=0,sp=0;
    while(!fin.eof())
    {
            fin.get(ch);
            if((ch > 63&& ch<91||(ch>96&&ch<123)))
                c++;
            else
                if(ch==' ')
                    sp++;    
    }
    cout<<"\nno. of characters in file are "<<c;
    cout<<"\nno. of space in file are "<<sp;
    fin.close();
    return 0;
}