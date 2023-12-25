//Define a function to print Pascal Triangle up to N lines

#include <iostream>
using namespace std;
int fact(int x)
{
    if(x<= 0)
        return 1;
    int fact = 1;
    for(int i =1;i<=x ;i++)
        fact = fact*i;  
    return fact;   
}
int comb(int n,int r)
{
    int com = (fact(n))/((fact(r))*(fact(n-r)));
    return com;
}

int main()
{
    int n;
    cout<<"Enter length of pascal triangle"<<endl;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
            for(int j=0;j<=i;j++)
            {
                int k=0;
                if(j == 0)
                    while(k++ <= (n/2- i+1))
                        cout<<(" ");

                    cout<<" "<<(comb(i,j));
            }
            cout<<endl;
    }
    return 0;
}
