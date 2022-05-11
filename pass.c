#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, char* password) {
    
    int t=0,i;
    int a[]={0,0,0,0};
    
    for (i=0;i<n;i++)
    {
        if((int)*(password+i)>64 && (int)*(password+i)<91)
        {
            a[0]=a[0]+1;
        
        }
        else if((int)*(password+i)>96 && (int)*(password+i)<123)
        {
            a[1]=a[1]+1;
        }
        else if((int)*(password+i)>47 && (int)*(password+i)<58)
        {
            a[2]=a[2]+1;
        
        }
        else if(*(password+i)=='!'||*(password+i)=='$'||*(password+i)=='@'||*(password+i)=='#'||*(password+i)=='%'||*(password+i)=='^'||*(password+i)=='&'||*(password+i)=='*'||*(password+i)=='('||*(password+i)==')'||*(password+i)=='-'||*(password+i)=='+')
        {
            a[3]=a[3]+1;
        }

    }
    printf("\n%d%d%d%d",a[0],a[1],a[2],a[3]);
    for(i=0;i<4;i++)
    {
        if(a[i]==0)
        {
            t=t+1;
        }
    }
    printf("\n%d",t);
    if(n>=6 && t>=4)
    {
        return 0;
    }
    else if(n<6 && t>=4)
    {
        return (6-n);
    }
    else if(n>=6 && t<4)
    {
        return t;
    }
    else if(n<=6 && t<4)
    {
        if((6-n)==(4-t))
        {
            return (4-t);
        }
        else if((6-n)<=t)
        {
        	return (4-(4-t));
		}
    
        else if((6-n)>t)
        {
            return (6-n);
        }
    
    }
return 0;
}

int main()
{
    
    int n,i;
    scanf("%d",&n);
    char password[n];
    for(i=0;i<n;i++)
    {
    	scanf("\n%c",&password[i]);
	}

    int answer = minimumNumber(n, password);

    printf("\n%d\n", answer);

 

    return 0;
}


