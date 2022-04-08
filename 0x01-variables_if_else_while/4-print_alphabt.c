#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 after code execute
 */

int main(void)
{
char lower_case;

for(lower_case = 'a'; lower_case <= 'z'; lower_case++)
{
if(lower_case == 'q')
{
continue;
}
else if (lower_case == 'e')
{
continue;
}
putchar(lower_case);
}
putchar('\n');
return (0);
}
