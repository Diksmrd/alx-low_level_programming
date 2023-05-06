#include "main.h"
int main(void)
{
int a[] = { 100, 200, 97, 400, 500 };
int *p = a + 2;
printf("a[2] = %d\n", *(p));
return (0);
}
