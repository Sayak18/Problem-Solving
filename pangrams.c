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

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* pangrams(char* s) {
    int i,j,a=0,q=0;
    char ch;
    int t = strlen(s);
    
    for(i=65;i<=90;i++)
    {
        for(j=0;j<t;j++)
        {
          ch=s[j];
         // printf("%c",tolower(ch));
          if((int)(tolower(ch))==i)
          {
          	printf("%c",tolower(ch));
            a=a+1;
          }
       printf("\n%d",a);
        }
       if(a>0)
       {
        q++;
       }
       a=0;
    }
    printf("\n%d",q);
    if(q>=27)
    {
    printf("pangram");
    }
    else {
    printf("not pangram");
    }
return 'c';
}

int main()
{
	int n;
	scanf("%d",&n);
   char s[n];
   scanf("%s",&s);
   pangrams(s);

    return 0;
}
