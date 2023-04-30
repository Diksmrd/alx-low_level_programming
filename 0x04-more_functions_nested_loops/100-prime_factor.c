#include <stdio.h>

/**
 * main - Prints the largest prime factor of 612852475143
 * Return: Always 0
 */

int main(void)
{
unsigned long n = 612852475143;
unsigned long i;

for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
while (n % i == 0 && n != i)
{
n /= i;
}
}
}
printf("%lu\n", n);
return (0);
}
