#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
        if(a>=b && a>=c)
            {
                printf("%d is the largest",a);    
            }
        else if(b>=a && b>=c)
            {
                printf("%d is the largest",b);
            }
        else
            {
                printf("%d is the largest",c);
            }
}