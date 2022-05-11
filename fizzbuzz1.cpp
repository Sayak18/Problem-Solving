#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,K,i=0;
        cin>>N;
        cin>>K;
        i=N%K;
        
        i==0?cout<<(N/K):cout<<-1;

    }

return 0;
}
