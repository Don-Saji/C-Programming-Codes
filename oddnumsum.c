#include <stdio.h>
int main() {
    int x, y, i, total = 0;
    printf("\nInput a pair of numbers (for example 10,2):");
    printf("\nInput first number of the pair: ");
    scanf("%d", &x);
    printf("\nInput second number of the pair: ");
    scanf("%d", &y);
    if (y < x) {
        return 0;
    }
    printf("\nList of odd numbers: ");
    for (i = x; i <= y; i++) {        
        if ((i % 2) != 0) {
            printf("%d\n", i);
            total += i; 
        }
    }
    printf("Sum=%d\n", total);

    return 0;
}
