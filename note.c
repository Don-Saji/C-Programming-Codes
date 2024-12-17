#include<stdio.h>
int main()
{
    int amt,total;
    printf("enter the amount: ");
    scanf("%d",&amt);
    total=amt/100;
    printf("number 100_rupee notes: %d\n",total);
    amt=amt-(total*100);
    
    total=amt/50;
    printf("number of 50_rupee notes: %d\n",total);
    amt=amt-(total*50);
    
    total=amt/20;
    printf("number of 20_rupeee notes: %d\n",total);
    amt=amt-(total*20);
    
    total=amt/10;
    printf("number of 10_rupeee notes: %d\n",total);
    amt=amt-(total*10);
    
    total=amt/5;
    printf("number of 5_rupeee notes: %d\n",total);
    amt=amt-(total*5);
}
