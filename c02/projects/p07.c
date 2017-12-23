#include <stdio.h>

int main(void)
{
    int dollars, twenties, tens, fives;

    printf("Enter a dollars amount: ");
    scanf("%d", &dollars);

    twenties = dollars / 20;
    dollars = dollars - (twenties * 20);
    tens = dollars / 10;
    dollars = dollars - (tens * 10);
    fives = dollars / 5;
    dollars = dollars - (fives * 5);

    printf("$20 bill: %d\n", twenties);
    printf("$10 bill: %d\n", tens);
    printf("$5 bill: %d\n", fives);
    printf("$1 bill: %d\n", dollars);

    return 0;
}
