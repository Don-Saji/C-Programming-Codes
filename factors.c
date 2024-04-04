#include<stdio.h>
void main()
{
 int num, i;
 printf("enter an positive integer:");
 scanf("%d", &num);
 printf("the factors of %d are:" , num);
 for(i=1; i<=num; ++i)
 {
    if(num%1==0)
    {
        printf("%d",i);
    }
 }

}