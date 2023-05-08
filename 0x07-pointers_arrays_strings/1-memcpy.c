#include "main.h"


/**

*_memcpy - a function that copies memory area

*@dest: memory where is stored

*@src: memory where is copied

*@n: number of bytes

*

*Return: copied memory with n bytes changed

*/


char *_memcpy(char *dest, char *src, unsigned int n)

{

char *ptr_dest = dest;

char *ptr_src = src;

while (n-- > 0)

{

*ptr_dest++ = *ptr_src++;

}

return (dest);

}

