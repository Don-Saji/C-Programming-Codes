#include<stdio.h>
int main()
{
    int n,a[100];
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    printf("enter the elements into the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("the element at position %d: ",i+1);
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of all elements in that array is %d",sum);
    
return 0;
}