#include<stdio.h>
int main()
{
    int r;
    printf("enter the radius of a circle: ");
    scanf("%d",&r);
    float area=3.14*(r*r);
    float perimeter=2*3.14*r;
    printf("AREA: %f\n",area);
    printf("PERIMETER: %f",perimeter);
}
