/*Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include <iostream>
using namespace std;
class LargestNumber
{
    private:
    int a,b,c;
    int larg;
    public:
    void setN(int x,int y,int z)
    {
        a = x;
        b = y;
        c = z;
    }
   
    void calcLargest()
    {
        if(a>b)
        {
            if(a>c)
             larg = a;
            else
                larg = c;
        }else if(b>c)
            larg = b;
        else
            larg = c;
    }
    int getLargest()
    {
        return larg;
    }
};
int main()
{
    LargestNumber N;
    N.setN(119,21,13);
    N.calcLargest();
    N.getLargest();
    cout<<"Largest number is "<<N.getLargest()<<endl;
    return 0;
}