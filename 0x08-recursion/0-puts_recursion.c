#include "main.h"

/*
 * main - Entry point
 * simply return the code
 * this block of code return a string with a new line
 */

void _puts_recursion(char *s)

{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar (*s);
_putchar_recursion(s + 1);

}


