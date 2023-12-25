/*Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called*/
#include <iostream>
using namespace std;
class Square
{
    private:
    int n;
    int squ;
    static int count;
    public:

    void setN()
    {
        cout<<"Enter number to get square of :";
        cin>>n;
        
    }
    int getN()
    {
        return n;
    }
    int getsquare()
    {
        count ++;
        squ = n*n;
        return squ;

    }
    int getcount()
    {
        return count;
    }
    
};
int Square::count =0;
int main()
{
    Square s;
    s.setN();
    
    cout<<"Square of "<<s.getN()<<" is "<<s.getsquare()<<endl;
    cout<<"Function is called "<<s.getcount()<<" times";
    return 0;
}