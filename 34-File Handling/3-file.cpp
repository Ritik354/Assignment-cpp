/*Write a C++ program to open an output file 'a.txt' and
 append data to it.*/
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
    fout.open("C:/file/a.txt",ios::app);
    fout<<"\nShivam Pawar";
    fin.close();
    return 0;
} 