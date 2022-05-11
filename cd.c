#include<stdio.h>
#include<math.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&N);
        int i,result,A[N],x=0;
        double p,s=0;
        for(i=0;i<N;i++)
        {
           scanf("%d",&A[i]);
        }
        p=ceil((double)N/2);
        printf("%lf\n",p);
        printf("%lf\n",s);
        while((s+p)<N)
        {
        for(i=s;i<(s+p);i++)
        {
            result=gcd(result,A[i]);
        }
        if(result==2)
        {
         x++;
       
        }
        s=s+p;
        
        }
        printf("%d\n",x);
        if(x>0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;

}
int gcd(int a, int b) {
  int current_gcd = 1,d;
  for (d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
