/* Functions that illustrate the use of the static storage class specifier.*/

#include <stdio.h>

// Function prototypes
void count_stays_zero();
void count_increases();

void main()
{
    for (int i = 0; i < 3; i++)
    {
        count_stays_zero();
        count_increases();
    }
}

void count_stays_zero()
{
    int zero_count = 0;
    printf("The zero count is: %d \n", zero_count);
    zero_count += 1;
}

void count_increases()
{
    static int increasing_count = 0; // `static` prevents var from going out of scope when function is finished.
    printf("The increasing count is: %d \n", increasing_count);
    increasing_count += 1;
}
