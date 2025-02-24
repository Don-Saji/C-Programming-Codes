#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the 2 integers: ");
    scanf("%d%d",&n1,&n2);
    int sum=0;
    if(n1>n2)
        return 0;
    printf("The odd numbers b/w %d & %d are:\n",n1,n2);
    for(int i=n1;i<n2;i++)
    {
        if(i%2!=0 && i!=1){
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf("sum= %d",sum);
}
