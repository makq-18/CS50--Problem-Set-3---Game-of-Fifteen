/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
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

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // if condition to check user has entered 2 or 3 input values only in command prompt including file name.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // convert and assign user input command promt value from string to integer.
    int n = atoi(argv[1]);

    // if user input value contains "seed"
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // for loop to generate n number of psuedorandom-number, one on each line.
    for (int i = 0; i < n; i++)
    {
      printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}