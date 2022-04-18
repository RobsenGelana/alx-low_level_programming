#include <stdio.h>
#include "main.h"

/**
 main - Entry point
 return - 0 after code execute
 */

void _puts(char *str)
{
char *a;
int b;

a = str;

for (b = 0; a[b]; b++)
{

_putchar (a[b]);
}

_putchar('\n');
}
