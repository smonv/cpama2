#include <math.h>
#include <stdio.h>

int main(void)
{
    int rad;

    printf("Enter the radius: ");
    scanf("%d", &rad);

    printf("The volume of %d-meter sphere is: %f\n",
	rad, 4.0f / 3.0f * M_PI * rad * rad * rad);

    return 0;
}
