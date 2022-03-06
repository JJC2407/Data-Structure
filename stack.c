#include<stdio.h>
#include<stdlib.h>
int n;
int stack[50];
int top=0;
void push()
{
    int item;
    if(top==n)
        printf("Overflow");
    else
    {
        printf("Enter the element : ");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
        printf("\n Inserted Successfully ");
    }
}
void pop()
{
    int item;
    if(top==0)
        printf("Underflow");
    else
    {
        item=stack[top];
        top=top-1;
        printf("Deleted Successfully ");
    }
}
void display()
{
    int i;
    if(top==0)
        printf("\nStack is empty");
    else
    {
        printf("Current stack : \n");
        for(i=top;i>=1;i--)
        {
            printf("%d\t",stack[i]);
        }
    }
}
void main()
{
    printf("Enter the size of stack : ");
    scanf("%d",&n);
    printf("Stack Operation \n");
    int ch;
    do
    {
        printf("\n\n Menu\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n Enter your choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            exit(0);
        default:printf("\nvalid Entry ");
        }
    }while(ch!=4);
}
