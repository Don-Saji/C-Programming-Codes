#include<stdio.h>
int main()
{
    char id[100];
    int hours;
    float value;
    
    printf("enter the employee ID: ");
    scanf("%s",id);
    printf("enter the worked hours: ");
    scanf("%d",&hours);
    printf("salary/hour: ");
    scanf("%f",&value);
    
    float salary= hours *value;
    
    printf("ID: %s\n",id);
    printf("SALARY: %f",salary);
}
