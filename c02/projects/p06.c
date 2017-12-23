#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    int r = ((((3 * x - 2) * x - 5) * x - 1) * x + 7) - 6;

    printf("Result: %d\n", r);

    return 0;
}
