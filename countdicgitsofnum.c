#include <stdio.h>
int main()
{
    int N; 
    scanf("%d",&N);
    int dc=0,temp=N;
    while(temp!=0)
    {
      temp=temp/10;
      dc++;
    }
    printf("The number %d contains %d digits.",N,dc);
return 0;
}
