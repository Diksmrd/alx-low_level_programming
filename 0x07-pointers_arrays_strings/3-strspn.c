#include "main.h"
#include <string.h>

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
while (*s != '\0')
{
if (strchr(accept, *s) == NULL)
{
break;
}
count++;
s++;
}
return (count);
}
