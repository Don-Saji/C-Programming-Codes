#include<stdio.h>
int main()
{
    int sec,min,hr,day;
    printf("enter the seconds: ");
    scanf("%d",&sec);
    day=sec/86400;
    sec=sec-(day*86400);
    hr=sec/3600;
    sec=sec-(hr*3600);
    min=sec/60;
    sec=sec-(min*60);
    printf("%d DAYS %d HOURS %d MINUTES %d SECONDS",day,hr,min,sec);
}
