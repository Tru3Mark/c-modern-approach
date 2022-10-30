#include <stdio.h>

int main(void)
{
    int amount;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int a20bills = amount / 20;
    printf("$20 bills: %d\n", a20bills);
    amount = amount - (a20bills * 20);
    int a10bills = amount / 10;
    printf("$10 bills: %d\n", a10bills);
    amount = amount - (a10bills * 10);
    int a5bills = amount / 5;
    printf("$5 bills: %d\n", a5bills);
    amount = amount - (a5bills * 5);
    int a1bills = amount / 1;
    printf("$1 bills: %d\n", a1bills);
    return 0;
}
