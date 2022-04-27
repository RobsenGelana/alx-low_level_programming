#include "main.h"

/*
 * main - Entry point
 * _print_rev_recursion - prints a string in reverse
 * Return: Always 0 or void
 */

void _print_rev_recursion(char *s)
{

if (*s)/*Pointing it to the pointer*/
{
_print_rev_recursion(s + 1);/*If the condition is true add 1 */
_putchar(*s);/*then print *s*/
}
}

