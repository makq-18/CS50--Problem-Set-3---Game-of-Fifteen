/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * An O(nlog(n)) binary search algorithm to search needle in Haystack.
 * Returns true if value is in array of n values, else false.
 */

bool search(int value, int values[], int n)
{
    
    // variables min,max and mid for minimum, maximum and mid values in the array.
    int min, max , mid;
    min = 0;
    max = n-1;
    //if needle is in the range of Haystack.
    if (value >= values[min] && value <= values[max]) 
    {
            for(int i=0; i< n-1; i++) 
            {
                mid = (min + max)/2;
                if(value > values[mid])
                {
                    min = mid+1;
                }
                if(value < values[mid])
                {
                    max = mid-1;
                }
            }
        // if needle is found in Haystack.
        if (value == values[mid])
        return true;
    }
    return false;
}



/**
 * An O(n^2) linear sorting algorithm for n values.
 */

void sort(int values[], int n)
{
    //  for loop to repeat integer swapping for n number of times.
    for(int j=0 ; j< n -1 ; j++) 
    {
        // loop to swap n number of integers.
        for(int i=0 ; i<n-1; i++) 
        {
            if(values[i] > values[i+1])
            {
                int min = values[i+1];
                values[i+1] = values[i];
                values[i] = min;
            }
        }
    }
}

