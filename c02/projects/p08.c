#include <stdio.h>

int main(void)
{
    float loan, rate, monthly;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly);

    /* interest rate is yearly, so this converts it to a monthly rate */
    rate = (rate * 0.01f) / 12;

    loan = (loan - monthly) + (loan * rate);
    printf("Balance remaining after first payment: $%0.2f \n", loan);
    loan = (loan - monthly) + (loan * rate);
    printf("Balance remaining after second payment: $%0.2f \n", loan);
    loan = (loan - monthly) + (loan * rate);
    printf("Balance remaining after third payment: $%0.2f \n", loan);

    return 0;
}
