#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/**
 *main - Entry point
 *My first logial programm
 *Return: Always 0 after program executaion
 */
/* betty style doc for function main goes there */



int main(void)
{
        int n;

        srand(time(0));
       // n = rand() - RAND_MAX / 2;
       n=98;
        /* your code goes there */
        if (n == 0)
        {
                printf("%i, is zero\n", n);
        }
        else if (n<0)
        {
                printf("%i, is negative\n", n);
        }
        else
        {
                printf("%i, is positive\n", n);
        }
        return (0);
}

