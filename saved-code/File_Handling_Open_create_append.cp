#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;
    fout.open("c:/file/abc.txt",ios::app | ios::in | ios::out);

    if(!fout)
    {
        cout<<"File not created or Not able to open the file"<<endl;
    }
    else{
        cout<<"Enter the data";
        while(fout)
        {
           getline(cin,line);

           if(line == "-1")
             break;

           fout<<line;
        }
        cout<<"File created Successfully"<<endl;
    }

    cout<<endl;

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
