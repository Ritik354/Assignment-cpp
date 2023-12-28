/*Define a class Cube and calculate Volume of Cube and initialise it using constructor*/
#include <iostream>
using namespace std;
class Cube
{
    private:
    
    int vol;
    public:
    int s;
    Cube()
    {
        cout<<"default const called"<<endl;
    }
    Cube(int x)
    {
        cout<<"parameteraised const called"<<endl;
        s = x;
    }
    Cube(const Cube &x)
    {
        cout<<"copy const called "<<endl;
        
        s = x.s;
    }
    ~Cube()
    {
        cout<<"destructor called"<<endl;
    }
    int getSide()
    {
        return s;
    }
    void volume()
    {
        vol = s*s*s;
    }
    int getVolume()
    {
        return vol;
    }
};
int main()
{
    Cube c1 = 5;
    Cube c2 ;
    cout<<"Enter side of 2nd cube"<<endl;
    cin>>c2.s;
    c1.volume();
    c2.volume();
    cout<<"volume of cube of side "<<c1.getSide()<<" is "<<c1.getVolume()<<endl;
    cout<<"volume of cube of side "<<c2.getSide()<<" is "<<c2.getVolume()<<endl;

    return 0;  
}
