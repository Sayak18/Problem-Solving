#include<stdio.h>
int main()
{
    int T,N;
    scanf("%d",&T);
    while(T--)
    {
        int x=0,y=0,a=0,b=0,i;
        scanf("%d",&N);
        char p[N],s[N];
        scanf("%s",&s);
        scanf("%s",&p);
        for(i=0;i<N;i++)
        {
     	(s[i]=='0')?x++:a++;
     	(p[i]=='0')?y++:b++;
        	
           /*if (s[i]=='0')
            {
            	y=y+1;
			}
            if(p[i]=='0')
            {
            	a=a+1;
			}*/

        }
        
        if(y==x&&a==b)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
         
    }
    return 0;

}
