#include<stdio.h>
int main()
{
    int a[10],b[10],n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("enter the elements to the array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    printf("\ncopied array is: ");
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
    return 0;
}