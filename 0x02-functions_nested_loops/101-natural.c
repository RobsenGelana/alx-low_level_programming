/**
 * main - Entry point
 *Return: Always 0 after code execute
 */

int main(void)
{

int max = 1024;
int sum;
int num;

for (num = 3; num < max; num++)
{
if (num % 3 == 0)
{
sum += num;
}

printf(num);
}
return 0;

}
