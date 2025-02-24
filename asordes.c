#include<stdio.h>
int main()
{
    int a[100],n;
    printf("enter the total numbers: ");
    scanf("%d",&n);
    printf("enter numbers in ascending or descending order:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            printf("The number are in ascending order");
            break;
        }
        else
        {
            printf("The numbers are in descending order");
            break;
        }
    }
}
