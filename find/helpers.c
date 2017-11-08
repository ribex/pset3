/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */

#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // printf("Beginning search\n");
    int left = 0;
    int right = n - 1;

    // while length of list > 0
    do {
        if (left > right)
        {
            return false;
        }

        // look at middle of list
        // if number found, return true
        if (value == values[(left + right) / 2])
        {
            // printf("%i ", values[left + right / 2]);
            return true;
        }
        // else if number higher, search left
        else if (value > values[(left + right) / 2])
        {
            // printf("old left = %i ", left);
            left = ((left + right) / 2) + 1;
            // printf("new left = %i ", left);
        }
        // else if number lower, search right
        else if (value < values[(left + right) / 2])
        {
            // printf("old right = %i ", right);
            right = ((left + right) / 2) - 1;
            // printf("new right = %i ", right);
        }

    } while (n > 0);
    // if all else fails, return false
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{

    // selection sort
    // printf("Beginning sort\n");

    for (int i = 0; i < n; i++)
    {
        // min = i
        int min = values[i];
        int newMinLocation = i;
        // find smallest element from i to n - 1
        for (int j = i; j < n; j++)
        {
            if (min > values[j])
            {
                min = values[j];
                newMinLocation = j;
            }
        }
        // if min != i
        if (min != values[i])
        // exchange smallest element with element at i
        {
            values[newMinLocation] = values[i];
            values[i] = min;
        }
    }
    // printf("Sort completed\n");
    // for (int k = 0; k < n; k++)
    // printf("%i ", values[k]);
    return;
}
