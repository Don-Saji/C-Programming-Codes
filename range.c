#include<stdio.h>
int main()
{
    int x;
    printf("enter the number: ");
    scanf("%d",&x);
    
    if(x>=0 && x<=20)
    {
        printf("RANGE [0, 20]\n");
    }
    else if(x>=21 && x<=40)
    {
        printf("RANGE [21, 40]\n");
    }
    else if(x>41 && x<=60)
    {
        printf("RANGE [41, 60");
    }
    else if(x>=61 && x<=80)
    {
        printf("RANGE [61, 80]");
    }
    else
    {
        printf("OUT OF RANGE");
    }
return 0;
}
