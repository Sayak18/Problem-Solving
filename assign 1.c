#include<stdio.h>
#define max 1000
int a[max],z;
int Insert();
int delete();
int search();
int asort();
int dsort();
int dup();
int count();
int counto();
int display();
int main()
{
	int i,n;
	printf("Enter the size of the array:\n");
	scanf("%d",&z);
	printf("Enter the array elements:\n");
		for ( i = 0; i < z; i++)
		{
			scanf("%d",&a[i]);
		}
	
	do
	{
		printf("ENTER 1)FOR Insert 2)FOR Deletion 3)FOR Search 4)FOR Ascending sort 5)FOR Descending sort 6)FOR Delete duplicate 7)FOR Count elements 8)FOR count occurance 10)FOR display 9)EXIT \n");
		scanf("%d",&n);
	

		switch(n)
		{
		
			case 1: Insert();
				break;
		    case 2: delete();
				break;
			case 3: search();
				break;
			case 4: asort();
			    break;
			case 5: dsort();
				break;
			case 6: dup();
				break;
			case 7: count();
				break;
			case 8: counto();
				break;
			case 10: display();
				break;
			default: printf("Enter the correct choice\n");
		  					
	    }
	}while(n!=9);
	return 0;
}
int Insert()
{
	int t;
	printf("Enter the position you want ot insert the element:\n");
	scanf("%d",&t);
	printf("Enter the element\n");	
	scanf("%d",&a[t-1]);
	return 0;
}
int delete()
{
	int i,p,j;
	printf("Enter the element you want to delete:\n");
	scanf("%d",&p);
	for(i=0;i<z;i++)
	{
		if(a[i]==p)
		{
			for(j=i;j<z-1;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	z--;
	return 0;
}
int search()
{
	int i,p;
	printf("Enter the element to search:\n");
    scanf("%d",&p);
	for(i=0;i<z;i++)
	{
		if(a[i]==p)
		{
			printf("The element is present at the position:%d",i+1);
			printf("\n");
		}
		
	}
	return 0;
}
int asort()
{
	int i,j,temp;
for(i=0;i<z;i++)
   {
      for(j=i+1;j<z;j++)
	  {
         if(a[i]>a[j])
		 {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
printf("The array is sorted\n");
return 0;
}
int dsort()
{
	int i,j,temp;
for(i=0;i<z;i++)
   {
      for(j=i+1;j<z;j++)
	  {
         if(a[i]<a[j])
		 {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
         }
      }
   }
printf("The array is sorted\n");
return 0;

}
int dup()
{
	int i,j,k;
   for(i=0; i<z; i++)
    {
        for(j=i+1; j<z; j++)
        {
            if(a[i] == a[j])
            {
               
                for(k=j; k < z - 1; k++)
                {
                    a[k] = a[k + 1];
                }

              
                z--;

               
                j--;
            }
       }
   }
	printf("Duplicate elements are deleted\n");
	return 0;
}
int count()
{
	printf("Number of elements present in the array is:%d",z);
	printf("\n");
}
int counto()
{
	int p,i,s=0;
	printf("Enter the number to count its ocuurenceL:\n");
	scanf("%d",&p);
	for(i=0;i<z;i++)
	{
		if(a[i]==p)
		{
			s=s+1;
		}
	}
	printf("The occurance of the element %d is %d times.\n",p,s);
}
int display()
{
	int i;
	printf("The elements are:");
	for(i=0;i<z;i++)
	{
		printf("%d",a[i]);
		printf(" ");
	}
	printf("\n");
	return 0;
}
