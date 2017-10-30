/**
 * generate.c
 *
 * Generates pseudorandom numbers in [0,MAX), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */

#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// upper limit on range of integers that can be generated
#define LIMIT 65536

int main(int argc, string argv[])
{
    // program expects one or two arguments:
    // n is required; number of pseudorandom numbers to generate
    // s is optional; seed for generator
    if (argc != 2 && argc != 3)
    {
        printf("Usage: ./generate n [s]\n");
        return 1;
    }

    // turn our argument "n" into an integer
    int n = atoi(argv[1]);

    // if the "s" argument is used, convert the string to an int
    // in either case, cast the int to a long
    // srand48 is used to seed drand48
    if (argc == 3)
    {
        srand48((long) atoi(argv[2]));
    }
    else
    {
        // time(NULL) constantly changes
        srand48((long) time(NULL));
    }

    // "n" integers are returned within the range of 0 to MAX, in this case 65536
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}
