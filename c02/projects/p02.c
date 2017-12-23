#include <math.h>
#include <stdio.h>

#define RAD 10

int main(void)
{
    printf("The volume of %d-meter sphere is: %f\n",
	RAD, 4.0f / 3.0f * M_PI * RAD * RAD * RAD);

    return 0;
}
