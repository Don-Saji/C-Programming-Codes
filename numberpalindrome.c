#include <stdio.h>

int main() 
{
    int num,reverse=0,lastdigit,n;
    printf("Enter the nummber:\n");
    scanf("%d",&n);
    num=n;
    while(num>=1){ 
        lastdigit=num%10;
        reverse=reverse*10;
        reverse=reverse+lastdigit;
        num=num/10;
    }
    if(reverse==n){
        printf("%d is palidrome\n",n);
    }else
    {
        printf("%d is not palindrome\n",n);
    }
return 0;
}