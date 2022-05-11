#include<iostream>
#include <algorithm>
bool comp(int a, int b)
{
    return (a < b);
}
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,p,q,r,m,s,z;
        cin>>a>>b>>c>>p>>q>>r;
        m=max({p-a,q-b,r-c},comp);
        z=(p+q+r)/2;
        s=z-(a+b+c);
        m>=s?cout<<"yes"<<endl:cout<<"no"<<endl;
    }
    return 0;
}
