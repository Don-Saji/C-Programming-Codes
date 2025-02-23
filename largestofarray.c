#include <stdio.h>

int main()
{
    int i, n, largest;
    int arr[100];
    printf("enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i = 0; i < n; ++i)
    {
       scanf("%d", &arr[i]);
    }
    int l=arr[0];
    for(int i=1;i<n;i++)
    {
      if(arr[i]>l)
      {
        l=arr[i];
      }
    }
    printf("Largest element = %d",l);
return 0;
}
