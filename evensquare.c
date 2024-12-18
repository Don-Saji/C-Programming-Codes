#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of numbers: ");
    scanf("%d",&n);
    printf("square of even numbers(from 1 to n)\n");
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("square of %d is: %d\n",i,i*i);
        }
    }
return 0;
}
