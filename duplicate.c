#include<stdio.h>
int main()
{
    int a[10],b[10],n,count=0;
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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]) 
            {
                count++;
                break;
            }
        }
    }
    printf("\nthe duplicate elements is:%d",count);
}
