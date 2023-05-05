#include "main.h"
#include <ctype.h>

/**
 *  string_toupper - changes all lowercase letters of a string to uppercase
 *@n: pointer
 * Return: char
 */

char *string_toupper(char *str)
{
char *p = str;
while (*p)
{
if (islower(*p))
{
*p = toupper(*p);
}
p++;
}
return (str);
}
