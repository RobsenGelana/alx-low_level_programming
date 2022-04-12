#include <main.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 after code execute
 */

void print_alphabet_x10(void)
{
int n, i;

i = 0;

while (i < 10)
{

for (n = 'a'; n <= 'z'; n++)
{

_puthcar(n);

}

i++;

_putchar('\n');

}

return (0);

}
