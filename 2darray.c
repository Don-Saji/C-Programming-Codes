#include<stdio.h>
int main()
{
    int A[100][100],r,c;
    printf("Enter the number of row and column\n");
    scanf("%d%d",&r,&c);
    printf("Enter the elements into the matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter value for A[%d][%d]:",i,j);
            scanf("%d",&A[i][j]);
        }
    }
/*to display matrix*/
printf("Two dimensional array elements:\n");
for ( int i = 0; i < r; i++)
{
    for(int j=0;j<c;j++)
    {
        printf("%d\t",A[i][j]);
        if(j==2)
        {
            printf("\n");
        }
    }
}
return 0;
}