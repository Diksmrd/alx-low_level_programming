#include "main.h"
#include <string.h>

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
if (strchr(accept, *s) != NULL)
{
return (s);
}
s++;
}
return (NULL);
}
