#include <iostream>
using namespace std;
int gcd_euclid(long long a, long long b) {
  if(b==0)
  return a;
  else{
  	gcd_euclid(b,a%b);
  }
}
long long lcm(long long a,long long b)
{
	long long L;
	L=(a*b)/gcd_euclid(a,b);
	return L;
}
int main()
{
	long long a,b;
	cin>>a>>b;
	cout<<lcm(a,b)<<endl;
	return 0;
}
