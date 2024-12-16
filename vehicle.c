#include<stdio.h>
int main()
{
    int d,l;
    printf("enter the distance covered(km): ");
    scanf("%d",&d);
    printf("amount of fuel spent(litre): ");
    scanf("%d",&l);
    
    int avg=d/l;
    printf("Average consumption(km/litre) : %d",avg);
}
