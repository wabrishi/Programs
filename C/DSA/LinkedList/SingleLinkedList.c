#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *createnode()
{
    node *t;
    t=(node *) malloc (sizeof(node));
    t->next=0;
    printf("Enter The Value for node");
    scanf("%d",&t->data);
    return t;
}
node *addfirst(node *h)
{
    node * newnode;
    newnode=createnode();
    newnode->next=h;
    return newnode;
}
void display(node *h)
{
    if(!h)
    {
        printf("List is Empety");
    }
    else{
        while (h)
        {
            printf("%d\t",h->data);
            h=h->next;

        }
        
    }
}
int main()
{
    int n;
    node *head=0;
    while (1)
    {
        /* code */
        printf("1. for addfirst\n");
        printf("2. display\n");
        printf("3. exit\n");
        printf("enter choice = ");
        scanf("%d",&n);
        switch (n)
        {
        case 1: head=addfirst(head);
            break;
        case 2: display(head);
            break;        
        default:
            exit(0);
            break;
        }
    }
    return 0;
    
}

