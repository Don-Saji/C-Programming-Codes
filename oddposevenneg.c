#include <stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The number is zero\n");
    }
    else if(n>0)
    {
        if(n%2==0)
        {
            printf("%d is positive and even\n");
        }
        else
        {
            printf("%d is positive and odd\n");
        }
    }
    else
    {
        if(n%2!=0)
        {
            printf("%d is negative and odd\n");
        }
        else
        {
            printf("%d is negative and even\n");
        }
    }
return 0;
}
