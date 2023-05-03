#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: the integer value of the string, or 0 if there are no numbers
 */

int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

if (s[i] == '-')
{
sign = -1;
i++;
}
else if (s[i] == '+')
{
i++;
}

while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
else
{
break;
}
}
return (result *sign);
}
