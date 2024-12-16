#include <stdio.h>

int main() 
{
    int num,reverse=0,lastdigit;
    printf("Enter the nummber:\n");
    scanf("%d",&num);
    while(num>=1){ 
        lastdigit=num%10;
        reverse=reverse*10;
        reverse=reverse+lastdigit;
        num=num/10;
    }
printf("the reverse of the number is: %d\n",reverse);
return 0;
}