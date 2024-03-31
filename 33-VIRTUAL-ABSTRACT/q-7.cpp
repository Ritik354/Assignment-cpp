/*Create a base class called Matrix. Use this class to store 4 int type values that could
be used to calculate determinants and create matrices. Create class
calculate_determinant which will calculate the determinant of a matrix.
Using these classes, calculate the determinant of the matrix*/
#include <iostream>
using namespace std;
class Matrix
{
int a[3][3],b,c,d,ans;
public:
int i,j;
void get_values()
{
    cout<<"\nEnter matrix values \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter element in pocket ["<<i<<"] ["<<j<<"]";
            cin>>a[i][j];
        }
    }
    
    
}
void show_values()
{
    cout<<"\nEntered Matrix is \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<" "<<a[i][j]<<" ";
        
        }
        cout<<"\n";
    }
}
void calc()
{
    b = a[0][0]*((a[1][1]*a[2][2])- (a[2][1]*a[1][2]));
    c = a[0][1]*((a[1][0]*a[2][2])-(a[2][0]*a[1][2]));
    d = a[0][2]*((a[1][0]*a[2][1])-(a[2][0]*a[1][1]));
    ans = b - c + d;

}
void show_deter()
{
    cout<<"\nDeterminant is "<<ans; 
}
};
using namespace std;
int main()
{
    Matrix m;
    m.get_values();
    m.show_values();
    m.calc();
    m.show_deter();

}