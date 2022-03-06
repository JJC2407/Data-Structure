#include<stdio.h>
int search(int ar[],int n)
{
    int i,a;
    printf("\n\nEnter the searched element : ");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(ar[i]==a)
        {
            break;
        }
    }
    if(i==n)
        printf("\nThe element not in the array\n");
    else
        printf("\nThe %d position is %d\n",a,i);
}
int add(int ar[],int n)
{
    int a,p;
    printf("Enter the element : ");
    scanf("%d",&a);
    printf("Enter the position : ");
    scanf("%d",&p);
    int i;
    for(i=n;i>=p;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[p-1]=a;
    n=n+1;
    for(i=0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
}
int del(int ar[],int n)
{
    int a,b;
    printf("\n Enter delted number : ");
    scanf("%d",&a);
    int i;
    for(i=0;i<=n;i++)
    {
        if(ar[i]==a)
        {
            b=i;
            break;
        }
    }
    for(i=b;i<n;i++)
    {
        ar[i]=ar[i+1];
    }
    n=n-1;
    printf("\n After deletion the array is : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
}
int main()
{
    int ar[100],n,i,ch;
    printf("Enter the limit : ");
    scanf("%d",&n);
    printf("Enter the elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    while(1)
    {
        printf("\n\nMenu\n--------\n");
        printf("1.Add\n2.Delete\n3.Search\n4.Exit\n");
        printf("\nSelect an option : ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                {
                    add(ar,n);
                    break;
                }

            case 2:
                {
                    del(ar,n);
                    break;
                }

            case 3:
                {
                    search(ar,n);
                    break;
                }
            case 4:
                break;

            default:printf("Enter a valid option : ");
        }

    }

}
