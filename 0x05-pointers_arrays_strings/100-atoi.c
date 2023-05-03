#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: the integer
 */

int _atoi(char *s)
{
int c = 0;
unsigned int ni = 0;
int min = 1;
int is = 0;

while (s[c])
{
if (s[c] == '-')
{
min *= -1;
}
if (s[c] >= '0' && s[c] <= '9')
{
is = 1;
ni = (ni * 10) + (s[c] - '0');
}
else if (is == 1)
{
break;
}
c++;
}
ni *= min;
return (ni);
}
