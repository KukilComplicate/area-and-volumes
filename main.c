#include <stdio.h>

#include "volumes.h"

int main()
{
    printf("Volumes:\n");
    float len = 3.0f;
    printf("Cube length: %.2f\nVolume: %.2f\n", len, VolumeCube(len));

    float radius = 5.0f;
    float height = 10.0f;
    printf("Radius: %.2f\nHeight: %.2f\nVolume: %.2f\n", radius, height, VolumeCylinder(radius, height));

    printf("PI value: %.5f", ret_PI());
    return 0;
}