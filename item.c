#include<stdio.h>
int main()
{
    int w1,w2,n1,n2;
    printf("enter the weight of first items: ");
    scanf("%d",&w1);
    printf("enter the count of first item: ");
    scanf("%d",&n1);
    printf("enter the weight of second items: ");
    scanf("%d",&w2);
    printf("enter the count of second item: ");
    scanf("%d",&n2);
    float avg=((float)(w1*n1)+(w2*n2))/(n1+n2);
    printf("the average weight: %f",avg);
}
