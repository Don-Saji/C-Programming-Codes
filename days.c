#include<stdio.h>
int main()
{
    int num;
    int year,week;
    printf("enter the number of days: ");
    scanf("%d",&num);
    year=num/365;
    week=(num%365)/7;
    
    printf("YEARS: %d\n",year);
    printf("WEEK: %d",week);
}
