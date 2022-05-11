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
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(int arr_rows, int arr_columns, int* arr) {
    int i,j,p=0,s=0;
    for(i=0;i<arr_rows;i++)
    {
        for(j=0;j<arr_columns;j++)
        {
          if(j==i) 
          {
              s=s+*(*(arr+i)+j);
          } 
          else if(i==(arr_rows-j-1))
          {
              p=p+*(*(arr+i)+j);
          }
        }
    }
    if(s>p)
    {
        return (s-p);
    }
    else
    {
        return (p-s);
    }

}

int main()
{
    int n;
    scanf("%d",&n);

   int arr[n][n];

    for (int i = 0; i < n; i++) {
     for (int j = 0; j < n; j++) {
            scanf("%d",&(arr[i][j]));
        }
    }

    int result = diagonalDifference(n, n, arr);

    printf("%d\n", result);

    
    return 0;
}
