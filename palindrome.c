#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int f ,len;
    printf("Enter the word");
    scanf("%s",string);
    len=strlen(string);
    for(int i=0;i<len;i++){
        if(string[i]==string[len-i-1])
            f=1;
    }
    if(f==1)
        printf("palindrome");
        else 
        printf("not palindrome");
        return 0;
}