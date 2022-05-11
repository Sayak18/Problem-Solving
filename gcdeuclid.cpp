#include <iostream>

int gcd_euclid(int a, int b) {
  if(b==0)
  return a;
  else{
  	gcd_euclid(b,a%b);
  }
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout<<gcd_euclid(a,b)<<std::endl;
  //std::cout << gcd_naive(a, b) << std::endl;
  return 0;
}
