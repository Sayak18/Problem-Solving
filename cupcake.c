#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N,T,i,j,p,MAX=0;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{ 
	  scanf("%d",&N);
	  for(j=1;j<=(N-1);j++)
	  {
	  	if(N%j!=0)
	  	{
	  		p=N-j;
	  		MAX=max(p,MAX);
		}

	  }
	  printf("%d",MAX);
	  MAX=0;
   }
   return 0;
}
int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
