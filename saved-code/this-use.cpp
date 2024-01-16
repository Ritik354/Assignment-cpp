#include <iostream>
using namespace std;
class Complex
{
    private:
    int x;
    int y;
    public:
    void setData(int x,int y)
    {
        this->x = x;
        this->y = y;
    }
   
    void showData()
    {
        cout<<"real = "<<x<<" img = "<<y<<endl;
    }
    Complex sumGreater(Complex C)
    {
        if((x+y)>(C.x+C.y))
        {
            return *this;
        }else
        {
            return C;
        }
    }
};
 void inputData(Complex *p)
    {
        int x,y;
        cout<<"Enter real and img part of complex number : "<<endl;
        cin>>x>>y;
        p->setData(x,y);
    }
int main()
{
    Complex c1,c2,c3;
    inputData(&c1);
    inputData(&c2);
    c3 = c1.sumGreater(c2);
    c3.showData();
    return 0;
}