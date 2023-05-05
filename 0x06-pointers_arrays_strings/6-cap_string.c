#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the input string
 *
 * Return: pointer to the resulting string
 */

char *cap_string(char *str)
{
char *p = str;

while (*p)
{
if (p == str || isspace((unsigned char)*(p - 1)) || ispunct((unsigned char)*(p - 1)))
*p = toupper((unsigned char)*p);
p++;
}
return (str);
}
