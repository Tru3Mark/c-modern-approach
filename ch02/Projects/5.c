#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter value for x for polynomial equation: ");
    scanf("%d", &x);
    int poly = ((3 * (x * x * x * x * x)) + (2 * (x * x * x * x)) - (5 * (x * x * x)) - (x * x) + (7 * x) - 6);
    printf("The polynomial is equal to: %d\n", poly);
}
