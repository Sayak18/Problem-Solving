#include <stdio.h>
#include <stdlib.h>
 
struct Node *f = NULL;
struct Node *r = NULL;
 
struct Node
{
    int data;
    struct Node *next;
};
 
void display(struct Node *ptr)
{
    printf("The queue=>\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
 
void enqueue(int val)
{
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full");
    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next = n;
            r=n;
        }
    }
}
 
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f==NULL){
        printf("Queue is Empty\n");
    }
    else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{
    int no, ch, e;
    do
    {
    	printf("\n 1 - Enqueue");
        printf("\n 2 - Dequeue");
        printf("\n 3 - Dipslay");
        printf("\n 4 - Exit");
        printf("\n Enter choice : ");
        scanf("%d", &ch);
 
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            enqueue(no);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display(f);
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

