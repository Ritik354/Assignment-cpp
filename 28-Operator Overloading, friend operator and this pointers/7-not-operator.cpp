/*Create an Integer class and overload logical not operator for that class.*/
#include <iostream>
using namespace std;

class Integer
{
    private:
    int i;
    public:
    void getData()
    {
        cout<<"Enter a number "<<endl;
        cin>>i;
    }
    int operator !()
    {
        return -i;
    }
    void display()
    {
        cout<<"Entered value is "<<i<<endl;
    }
};
int main()
{
    Integer a;
    a.getData();
    a.display();
    cout<<!a<<endl;
    
    
}