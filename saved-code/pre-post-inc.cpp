// pre and post increment
#include <iostream>
using namespace std;
class Increment
{
private:
    int n;

public:
    Increment()
    {
        cout << "default const called " << endl;
    }
    Increment(int x)
    {
        cout << "parameterised const called" << endl;
        n = x;
    }
    Increment operator++(int useless) // post increment
    {
        Increment temp;
        cout << "post increment" << endl;
        temp.n = n++;
        return temp;
    }
    Increment operator++() // pre increment
    {
        cout << "pre increment" << endl;
        Increment temp;

        temp.n = ++n;
        return temp;
    }
    void display()
    {

        cout << "Incremented value is " << n << endl;
    }
    Increment(const Increment &x)
    {
        cout<<"Copy const called"<<endl;
        n = x.n;
    }
    friend ostream& operator<<(ostream &os, Increment i);
    friend istream& operator>>(istream &os, Increment i);
};
ostream& operator<<(ostream &os , Increment i)
    {
    os<<"friend Operator called"<<endl;
    os<< "friend Incremented value is " << i.n<< endl;
    return os;
    }
istream& operator>>(istream &os , Increment i)
    {
    
    
    os>>i;
    return os;
    }   
int main()
{
    Increment i1(5), i2(10), c3;
    // i1.operator++();
    // i2.operator++();
    (++i1).display();
    (i2++).display();
    i2.display();
    cout<<i2<<i1;
    cin>>i2>>i1;
    return 0;
}
