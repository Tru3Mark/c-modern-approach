#include <stdio.h>

int main(void)
{
    float loan, interest, monthlyPayment;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);

    float monthlyInterest = (interest / 100) / 12 + 1;

    float balance1 = (loan * monthlyInterest) - monthlyPayment;
    printf("Balance remaining after first payment: $%.2f\n", balance1);

    float balance2 = (balance1 * monthlyInterest) - monthlyPayment;
    printf("Balance remaining after second payment: $%.2f\n", balance2);

    float balance3 = (balance2 * monthlyInterest) - monthlyPayment;
    printf("Balance remaining after third payment: $%.2f\n", balance3);
    return 0;
}
