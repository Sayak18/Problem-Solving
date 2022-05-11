#include<iostream>
#include<string>
using namespace std;
int xorpalin(string &s,int n)
{
	int p,w,t;
	s[0]==s[n]?p=0:p=1;
	for(int i=1;i<=n;i++){
		s[i]==s[n-i]?w=0:w=1;
		if(p==w)
		 t++;
		else
		 break; 
	}
	return t;
	
}
int main()
{
	int T;
	cin>>T;
	while(T--){
		int N,q;
		string s;
		cin>>N;
		cin.ignore();
		getline(cin,s);
		q=xorpalin(s,N-1);
		q==(N-1)?cout<<"YES"<<endl:cout<<"NO"<<endl;
	}
	return 0;
}
