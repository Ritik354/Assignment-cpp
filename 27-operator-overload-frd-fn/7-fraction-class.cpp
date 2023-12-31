/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>*/
#include <iostream>
using namespace std;
class Fraction
{
    private:
    long num;
    long den;
    public:
    Fraction(long n=0, long d=0)
    {
        num = n;
        den = d;
    }
    friend void operator>>(istream &in ,Fraction &f)
    {
        cout<<"\n Numerator    :  ";
        in>>f.num;
        cout<<"\n Denominator  :  ";
        in>>f.den;
    }
    friend void operator<<(ostream &out ,Fraction &f)
    {
        out<<f.num<<"/"<<f.den;
    }
    Fraction operator++()
    {
        ++num;
        ++den;
        return (*this);
    }
    Fraction operator++(int useless)
    {
        Fraction temp=*this;
        num++;
        den++;
        return temp;
    }
    
};
int main()
{
    Fraction f1,f2,f3;
    cout<<endl<<"f1  : ";
    cout<<f1;
    cout<<endl<<"f2  : ";
    cout<<f2;
    
    cout<<endl<<"Enter first fraction value"<<endl;
    cin>>f1;
    
    f3 = f1++;

    cout<<endl<<"f1++  : ";
    cout<<f1;
    cout<<endl<<"f3 = f1++ :  ";
    cout<<f3;
    cout<<endl<<"Enter second fraction value"<<endl;
    cin>>f2;
    

    f3 = f2++;
    cout<<endl<<"f2++  : ";
    cout<<f2;
    cout<<endl<<"f3 = f1++ :  ";
    cout<<f3;
    return 0;
}
