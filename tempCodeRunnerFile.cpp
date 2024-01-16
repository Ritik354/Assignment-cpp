#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    ofstream fin;
    fout.open("c:/file/abc.txt");
    if(!fout)
    {
        cout<<"File not created"<<endl;
    }else
    {
        fout<<"Hello File Handling";
        cout<<"File created sucessfully"<<endl;
    }
    fin("c:/file/abc.txt");
    fout.close();
    return 0;
}