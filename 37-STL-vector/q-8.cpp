/*Write a program to find common elements between two vectors.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 {10,50,60,80,7,20};
    vector<int> v2 {20,40,11,6,9,8};
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector<int> v3(v1.size()+v2.size());
    vector<int> :: iterator it,end;

    end = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    cout<<"common elements v3 : ";
    for(it = v3.begin();it!= v3.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}