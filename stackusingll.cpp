#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *ptr;
}*top,*top1,*temp;
void push(int data);
void pop();
void display();
void create();
int count = 0;
int main()
{
    int no, ch, e;
    create();
    do
    {
    	printf("\n 1 - Push");
        printf("\n 2 - Pop");
        printf("\n 3 - Dipslay");
        printf("\n 4 - Exit");
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            push(no);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default :
            printf(" Wrong choice, Please enter correct choice  ");
            break;
        }
    }while(ch!=4);
    return 0;
}
 
/* Create empty stack */
void create()
{
    top = NULL;
}
/* Push data into stack */
void push(int data)
{
    if (top == NULL)
    {
        top =(struct node *)malloc(1*sizeof(struct node));
        top->ptr = NULL;
        top->info = data;
    }
    else
    {
        temp =(struct node *)malloc(1*sizeof(struct node));
        temp->ptr = top;
        temp->info = data;
        top = temp;
    }
    count++;
}
 
/* Display stack elements */
void display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nStack is empty");
        return;
    }
    else{
	printf("The stack =>");
 
    while (top1 != NULL)
    {
        printf("%d ", top1->info);
        top1 = top1->ptr;
    }
 }
}
 
/* Pop Operation on stack */
void pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        top1 = top1->ptr;
    printf("Popped value : %d\n", top->info);
    free(top);
    top = top1;
    count--;
}
