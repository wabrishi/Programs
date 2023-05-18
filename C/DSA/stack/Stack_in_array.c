#include<stdio.h>
int size = 10;
int stack[];
int tos= -1;

int main()
{
    int ch;
    while (1)
    {
        display();
        printf("\n1. push\n");
        printf("2. pop\n");
        printf("3. display\n");
        printf("4. exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        push();break;
        case 2:
        pop(); break;    
        case 3:
        display(); break;    
        default:
            printf("thanks");
            exit(0);
            break;
        }
    }
    
}
 void push()
 {
    if (tos == size-1)
    {
        printf("stack is full");
        /* code */
    }
    else
    {
        ++tos;
        printf("Enter The Value");
        scanf("%d",&stack[tos]);
    }
    
 }
  void pop()
 {
    if (tos == -1)
    {
        printf("stack is Empaty");
        /* code */
    }
    else
    {
        printf("Poped - %d",stack[tos]);
        tos--;
    }
    
 }
 void display()
 {
    if (tos>=0)
    {
        printf("\nStack is : ");
        for (int i = 0; i <= tos; i++)
        {
            printf("%d\t",stack[i]);
            /* code */
        }
        
        /* code */
    }
    
 }