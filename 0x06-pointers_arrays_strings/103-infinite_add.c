#include "main.h"
#include <string.h>

/**
 * infinite_add - function that adds two numbers
 * @n1: The first number to add
 * @n2: The second number to add
 * @r: The buffer that stores the result
 * @size_r: The size of the buffer
 *
 * Return: Pointer to r if the sum can be stored in r,
 * otherwise return 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1);
int len2 = strlen(n2);
int len = len1 > len2 ? len1 : len2;
int carry = 0;
int sum, i;

if (len + 1 > size_r)
{
return (0);
}

r[len] = '\0';

for (i = 0; i < len; i++)
{
sum = carry;
if (i < len1)
{
sum += n1[len1 - 1 - i] - '0';
}
if (i < len2)
{
sum += n2[len2 - 1 - i] - '0';
}
carry = sum / 10;
r[len - 1 - i] = sum % 10 + '0';
}

if (carry != 0)
{
if (len + 1 > size_r)
{
return (0);
}
r[0] = carry + '0';
return (r);
}

return (r);
}
