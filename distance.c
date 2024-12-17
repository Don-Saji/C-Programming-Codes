#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    printf("Enter X1 and Y1: ");
    scanf("%d%d",&x1,&y1);
    printf("enter X2 and Y2: ");
    scanf("%d%d",&x2,&y2);
    
    int distance=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    
    printf("Distance between the points: %d",sqrt(distance));
}
