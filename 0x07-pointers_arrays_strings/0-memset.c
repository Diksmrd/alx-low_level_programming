#include "main.h"
#include <stdio.h>
#include <string.h>

void *my_memset(void *s, int c, size_t n);

int main(void)
{
char arr[10];
my_memset(arr, 'a', 10);
printf("%s\n", arr);
return (0);
}

void *my_memset(void *s, int c, size_t n)
{
char *ptr = s;
while (n-- > 0)
{
*ptr++ = c;
}
return (s);
}

