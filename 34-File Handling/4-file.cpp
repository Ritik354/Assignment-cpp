/*Write a program to copy the contents of one text file to another while changing the
case of every alphabet*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("C:/file/a.txt");
    ofstream fout;
    fout.open("C:/file/b.txt");
    char ch;
    while(!fin.eof())
    {
        fin.get(ch);
        if(ch>=97 && ch<=122)
        {
            ch = toupper(ch);
        }else if(ch>=65 && ch<=90)
        {
            ch = tolower(ch);
        }
        fout<<ch;
    }
    cout<<"\nData has been copied";
    fin.close();
    fout.close();
    return 0;
} 