#include<iostream>
using namespace std;
int main()
{
    int n,P=0,Q=1,i;
    int F=P+Q;
    cin>>n;
    if(n>0)
    {
    for ( i = 1; i <=n-2; i++)
    {
        P=Q;
        Q=F;
        F=(P+Q)%10;
    }}
    else F=0;
    cout<<F;
    return 0;
}
