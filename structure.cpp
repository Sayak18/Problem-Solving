#include <stdio.h>
#include<stdlib.h>
typedef struct person
{
   int age;
   float weight;
} psn;

int main()
{
	psn *name;
	int *ptr;
	*ptr=1;
	
	name=(psn*)malloc(sizeof(psn));
	name->age=20;
   printf("%d",*ptr); 
    return 0;
}
