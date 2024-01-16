/*Create a class Marks that have one member variable marks and one member
function that will print marks. We know that we can access member functions using
(.) dot operator. Now you need to overload (->) arrow operator to access that
function*/
#include <iostream>
using namespace std;
class Marks
{
    private:
    int marks;
    public:
    void getMarks()
    {
        cout<<"Enter marks : ";
        cin>>marks;
    }
    Marks *operator->()
    {
        return  this;
    }
    void display()
    {
        cout<<"Marks = "<<marks;
    }
};
int main()
{   
    Marks m1;
    m1.getMarks();
    m1.display();
    cout<<endl;
    m1->display();
    return 0;
}