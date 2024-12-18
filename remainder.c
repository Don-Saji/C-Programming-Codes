#include <stdio.h>
int main()
{
    int n,r;
    printf("Enter the divisor: ");
    scanf("%d",&n);
    printf("what will be the remainder: ");
    scanf("%d",&r);
    printf("The numbers b/w 1 and 100 which is divided by %d and the remainder will be %d:\n",n,r);
    for(int i=0;i<=1000;i++)
    {
        if(i%n==r)
        {
            printf("%d, ",i);
        }
    }
return 0;
}
