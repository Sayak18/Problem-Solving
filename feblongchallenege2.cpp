#include <iostream>
#include<string>
using namespace std;
int winner(string& ch)
{   int C=0,N=0;
	for(int i=0;i<ch.size();i++)
	{
		
	(ch[i]=='C')?C++:(ch[i]=='N')?N++:NULL;
	}
	return(C-N);
}
int main()
{
	int t,p,q;
	cin>>t;
	while(t--){
	string s;
	int x;
	cin>>x;
	cin.ignore();
    getline(cin,s);
    (winner(s)>0)?p=x*60:(winner(s)<0)?p=x*40:p=x*55; 
    cout<<p<<endl;
	}


	return 0;
}
