#include <stdio.h>

int main(void)
{
    int item;
    float price;
    int yyyy, mm, dd;

    printf("Enter item number: ");
    scanf("%d", &item);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yyyy);

    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n%d\t%4.2f\t%d/%d/%d\n", item, price, mm, dd, yyyy);

    return 0;
}
