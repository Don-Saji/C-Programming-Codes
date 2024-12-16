#include<stdio.h>
int main()
{
    int l,b;
    printf("enter the length of a rectangle: ");
    scanf("%d",&l);
    printf("enter the breadth of a rectangle: ");
    scanf("%d",&b);
    int area=l*b;
    int perimeter=2*(l+b);
    printf("AREA: %d\n",area);
    printf("PERIMETER: %d",perimeter);
}
