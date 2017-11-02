/**
 * helpers.h
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n);

    int left = 0;
    int right = n;
// while length of list > 0
    do {
//      look at middle of list
//      if number found, return true
        if (value == values[right / 2])
        {
            return true;
        }
//      else if number higher, search left
        else if (value > values[right / 2])
        {
            left = (right / 2) + 1;
        }
//      else if number lower, search right
        else if (value < values[right / 2])
        {
            right = (right / 2) - 1;
        }

    } while (values[] > 0);
// return false
    return false;

/**
 * Sorts array of n values.
 */
void sort(int values[], int n);
