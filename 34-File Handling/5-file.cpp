/*Write a C++ program to merge the two files*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin1,fin2;
    fin1.open("C:/file/a.txt");
    fin2.open("C:/file/b.txt");
    ofstream fout;
    fout.open("C:/file/c.txt");
    char ch;
    while(!fin1.eof())
    {
        fin1.get(ch);
        fout<<ch;
    }
    fin1.close();
    while(!fin2.eof())
    {
        fin2.get(ch);
        fout<<ch;
    }
    
    fin2.close();
    cout<<"\nData has been merged";
    fout.close();
    return 0;
} 