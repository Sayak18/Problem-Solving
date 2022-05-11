#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int x,y,K;
        cin>>x;
        cin>>y;
        cin>>K;
        (x%K==0&&y%K==0)?cout<<"yes"<<endl:cout<<"no"<<endl;
    }
return 0;
}
