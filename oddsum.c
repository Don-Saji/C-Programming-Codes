#include<stdio.h>
int main()
{
    int num[100],sum=0;
    printf("enter the numbers: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<5;i++)
    {
        if(num[i]%2!=0)
        {
            sum+=num[i];
        }
    }
    printf("SUM OF ODD NUMBERS AMONG THE FIVE NUMBERS: %d",sum);
return 0;
}
