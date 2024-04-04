#include<stdio.h>
void main()
{
    float a,b,c,d,e,f,g,result;
    printf("Enter a,b,c,e,d,f,g \n");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f,&g);
    result=((a-b/c *d+e)*(f+g));
    printf("Result=%f",result);
}