#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,x,y;
		cin>>a>>b>>x>>y;
		(x*y>=a*b)?cout<<"yes":cout<<"no";
	}
	return 0;
}
