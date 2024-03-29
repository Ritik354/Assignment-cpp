/*Write a C++ program to create a file and print “File created successfully” and throw
an error if file is not created.
*/
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("C:/file/write.txt");
    if(fout)
    {
        cout<<"File created sucessfully";
    }else
    {
        cout<<"file not created";
    }
    fout.close();
}