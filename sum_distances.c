/* Sums two provided distances */

#include <stdio.h>

// Function prototype
float sum_distances(float dist_1, float dist_2);

int main()
{
    float total_distance = sum_distances(4.31, 3.15);

    printf("The total distance is %.2f kilometers. \n", total_distance);
}

float sum_distances(float dist_0, float dist_2)

{
    return dist_0 + dist_2;
}
