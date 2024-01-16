#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int ID;
class student
{
    private:
    

    public:
    int id;
    string name;
    int age;
    string stream;
    void addStudent()
    {
        cout<<"Enter your name"<<endl;
        cin.get();
        getline(cin,name);
        cout<<"Enter your age"<<endl;
        cin>>age;
        cout<<"Enter your stream"<<endl;
        cin>>stream;

        ofstream fout;
        string line;
        fout.open("c:/file/student.txt",ios::app | ios::in | ios::out);
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
    }
    void printAllStudent();
    void searchStudent(int id);
    void updateStudent(int id);
    void deleteStudent(int id);

};
int main()
{
    int choice;
    cout<<"Enter your choice"<<endl;
    cin>>choice;

    while(true)
    {
        cout<<"1. Add Student"<<endl;
        cout<<"2. Print all students"<<endl;
        cout<<"3. Search a student "<<endl;
        cout<<"4. update a student "<<endl;
        cout<<"5. delete a student "<<endl;

        cin>>choice;

        student s;

        switch (choice)
        {
        case 1 : s.addStudent();
                break;
        case 2 : s.printAllStudent();
                break;

        case 3 : s.searchStudent();
                break;

        case 4 : s.deleteStudent();
                break;

        default:
                return;
        }
    }
    return 0;
}