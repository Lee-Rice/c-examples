/* Functions that illustrate the use of the static storage class specifier.*/

#include <stdio.h>

// Function prototypes
static void count_stays_zero();
void count_increases();
void print_num(int to_print);

// Here `static` limits the use of this variable to only this file.
static int num = 0;

void main()
{
    for (int i = 0; i < 3; i++)
    {
        count_stays_zero();
        count_increases();
    }
    print_num(num);
}

// When in front of a function, `static` prevents use of the function outside this file.
static void count_stays_zero()
{
    int zero_count = 0;
    printf("The zero count is: %d \n", zero_count);
    zero_count += 1;
    num += 3;
}

void count_increases()
{
    static int increasing_count = 0; // `static` prevents var from going out of scope when function is completed.
    printf("The increasing count is: %d \n", increasing_count);
    increasing_count += 1;
}

void print_num(int to_print)
{
    printf("The number is: %d\n", to_print);
}
