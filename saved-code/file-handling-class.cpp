#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ofstream fout;
    string line;
    fout.open("c:/file/abc.txt",ios::trunc | ios::in | ios::out);
    if(!fout)
    {
        cout<<"File not created"<<endl;
    }else
    {
        cout<<"ENTER DATA"<<endl;
        while(fout)
        {
            getline(cin,line);
            
            if(line == "-1")
            {
                break;
            }
            fout<<line;
            fout<<" ";
            
            
        }
        cout<<"File created sucessfully"<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open("c:/file/abc.txt");
    while(!fin.eof())
    {
        getline(fin,line);
        cout<<line;
    }
    fin.close();
    return 0;
}