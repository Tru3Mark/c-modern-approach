#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter value for x for polynomial equation: ");
    scanf("%d", &x);
    int poly = (((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6);
    printf("The polynomial is equal to: %d\n", poly);
}
