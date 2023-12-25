/*Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class*/
#include <iostream>
using namespace std;
class Reverse
{
    private:
    int ActualNumber;
    int ReverseNumber;

    public:
    void setN(int x)
    {
        ActualNumber = x;
    }
    int getN()
    {
        return ActualNumber;
    }
    void rev()
    {
        int remainder,i;
        ReverseNumber =0;
        i = ActualNumber ;
        while(i>0)
        {
            remainder=i%10;
            i=i/10;
            ReverseNumber = ReverseNumber*10 + remainder;
        }
        
    }
    int getrev()
    {
        return ReverseNumber;
    }
};
int main()
{
    Reverse R;
    R.setN(12345);
    R.rev();
    cout<<"Reverse of "<<R.getN() <<" is "<<R.getrev();
    return 0;
}