/*Define a class Greatest and define instance member function to find Greatest among
3 numbers using classes*/
#include <iostream>
using namespace std;
class Greatest
{
    private:
    int a,b,c;
    int larg;
    public:
    void setN()
    {
        cout<<"Enter three numbers";
        cin>>a;
        cin>>b;
        cin>>c;
    }
   
    void calcGreatest()
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
    int getGreatest()
    {
        return larg;
    }
};
int main()
{
    Greatest N;
    N.setN();
    N.calcGreatest();
    N.getGreatest();
    cout<<"Greatest number is "<<N.getGreatest()<<endl;
    return 0;
}