#include <iostream>
using namespace std;
class Dollar;
class Rupee
{
    private:
    float x;
    public:
    
    Rupee(float a)
    {
        cout<<"PC Called Rupee"<<endl;
        x = a;
    }
    int getR()
    {
        return x;
    }
    operator float()
    {
        cout<<"rupee to float "<<endl;
        return x;
    }
    void display()
    {
        cout<<x<<endl;
    }
    
   operator Dollar();
};
class Dollar
{
    private:
    float x;
    public:
    Dollar()
    {
        cout<<"DC called Dollar"<<endl;
    }
    Dollar(float a)
    {
        cout<<"PC Called Dollar"<<endl;
        x = a;
    }
    Dollar(Rupee r)
    {
        cout<<"Dollar(rupee) for Dollar"<<endl;
        x = r.getR()/100;
    }
    operator float()
    {
        cout<<"Dollar to float "<<endl;
        return x;
    }
    void display()
    {
        cout<<x<<endl;
    }
    operator Rupee()
    {
        cout<<"dollar to rupee"<<endl;
        return x*100;
    }
    float getD()
    {
        return x;
    }
    
};
int main()
{
    float x = 5, y = 6;
    Rupee R = x;//PC rupee class
    
    R.display();//display rupee class
    x = R;// typecast for rupee
    cout<<endl;

    Dollar D = y; //PC dollar class
    
    D.display();// dispaly dollar class
    y = D;// typecast for dollar
    cout<<endl;

    R = D; //float for dollar
    R.display();

    D = (Dollar)R;//float for rupee
    D.display();
    return 0;
}