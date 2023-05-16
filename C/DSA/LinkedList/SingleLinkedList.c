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
node *addlast(node *h)
{
    node * newnode, *t;
    newnode =createnode();
    if (h==0)
    {
        return newnode;
        /* code */
    }
    t=h;
    while (t->next!=0)
    {
        /* code */
        t=t->next;
    }
    t->next=newnode;
    return h;
}
node * delfirst(node *h)
{
    node * t;
    if (h==0)
    {
        printf("list Is Empety...............");
        return h;
        /* code */
    }
    t=h;
    h=h->next;
    t->next=0;
    free(t);
    return h;
}
node *dellast(node *h)
{
    node *t,*temp;
    if (h==0)
    {
        printf("their is No Element in list..........");
        return h;
    }
    t=h;
    while (t->next->next!=0)
    {
        
        t=t->next;

    }
    temp=t->next;
    t->next=0;
    free(temp);
    return h;
    
    
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
        printf("Current List Value: ");
        display(head);

        printf("\n1. Add First\n");
        printf("2. Add Last\n");
        printf("3. Del First\n");
        printf("4 Del Last\n");
        printf("3. exit\n");
        printf("enter choice = ");
        scanf("%d",&n);
        switch (n)
        {
        case 1: head=addfirst(head);
            break;
        case 2: head=addlast(head);
            break;
        case 3: head = delfirst(head);
            break;  
        case 4: head = dellast(head);
            break;       
        default:
            exit(0);
            break;
        }
    }
    return 0;
    
}

