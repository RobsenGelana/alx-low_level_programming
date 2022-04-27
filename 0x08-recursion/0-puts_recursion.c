#include "main.h"

/*
 * _puts_recursion - prints a string
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
_puts_recursion(s + 1);

}


