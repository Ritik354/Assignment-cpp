/*Define a base class Animals having member function sound() . Define another
derived class from Animals class named Dogs. You need to override the sound
function of the base class in the derived class*/
#include <iostream>
using namespace std;
class Animals
{
    public:
    void sound()
    {
        cout<<"Animals make sound";
    }
};
class Dogs:public Animals
{
    public:
    void sound()
    {
        cout<<"Dog Barks";
        Animals::sound();// to call parent class method
    }
};
using namespace std;
int main()
{
    Dogs a;
    a.sound();
    return 0;
}