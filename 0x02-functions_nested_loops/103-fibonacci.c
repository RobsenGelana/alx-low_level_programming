#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 after code execute
 */

int main(void)
{
unsigned long count, i, j, k, sums;

i = sums = 0;
j = 1;
for (count = 0; count < 50; count++)
{

k = i + j;
i = j;
j = k;
if (k % 2 == 0 && k < 4000000)
{

sum += k;
}

}
printf("%lu\n", sums);
return (0);

}
