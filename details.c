#include<stdio.h>
#define size 100
int main()
{
    char name[size],dob[size];
    long mobilenumber;
    printf("enter the name: ");
    scanf("%s",name);
    printf("enter the date-of-birth: ");
    scanf("%s",dob);
    printf("enter the mobile-number: ");
    scanf(" %lld",&mobilenumber);
    
    printf("NAME: %s\n",name);
    printf("DATE-OF-BIRTH: %s\n",dob);
    printf("MOBILE-NUMBER: +91 %lld",mobilenumber);
}
