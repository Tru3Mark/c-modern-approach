#include <stdio.h>

int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    float amountWithTax = amount * 1.05f;
    printf("With tax added: $%f\n", amountWithTax);
}
