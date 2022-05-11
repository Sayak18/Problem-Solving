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
 * Complete the 'hackerrankInString' function below.
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
 */
 char* hackerrankInString(char* s) {
    int i,z,j=0,R=0,n=-1;
    int p=strlen(s);
    char ch[]={'h','a','c','k','e','r','r','a','n','k'};
    
    
    for(z=0;z<10;z++)
    { 
    for(i=0;i<p;i++)
    {    
        if((int)*(s+i)==(int)ch[z]&&i>n)
        {  
        n=i;
        j++;
        break;
        }
    }
    }
    if(j==10)
    {
       return "YES";
    }
    else 
    {
       return "NO";
   
    }

}

int main()
{
    

    int q,q_itr,p;
    scanf("%d",&q);
    for (int q_itr = 0; q_itr < q; q_itr++) {
       scanf("%d",&p);
       char s[p];
       scanf("%s",&s);
      hackerrankInString(s,p);

       
    }

   

    return 0;
}

