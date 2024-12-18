#include <stdio.h>

int main()
{
    int s, i, max, pos;
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    int a[s];
    printf("Enter the elements of the array: ");
    for (i = 0; i < s; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    pos = 0;
    for (i = 1; i < s; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            pos = i;
        }
    }
    printf("The greatest element: %d\n", max);
    printf("Its position: %d\n", pos + 1);

    return 0;
}
