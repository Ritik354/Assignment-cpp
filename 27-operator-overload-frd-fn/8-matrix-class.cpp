/*Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};*/
#include <iostream>
using namespace std;
class Matrix
{
    private:
    int a[3][3];
    public:
    void getMatrix()
    {
        cout<<"Enter Matrix Elements (3 x 3) :"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }
    }
    void display()
    {
        
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j];
                cout<<"    ";
            }
            cout<<endl;
        }
    }
    void operator-()
    {
         
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j] = -a[i][j];
            }
            cout<<endl;
        }
    }

};
int main()
{
    Matrix m;
    m.getMatrix();
    cout<<"Entered matrix is :  "<<endl;
    m.display();
    m.operator-();
    cout<<"Negated matrix is :  "<<endl;
    m.display();
    return 0;
}