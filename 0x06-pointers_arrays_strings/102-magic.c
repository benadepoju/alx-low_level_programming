#include <stdio.h>
/**
 * write your line of code here...
 * - you are not allowed to use a
 * - you are not allowed to modify p
 * - you are not allowed to code anything else than this line of code
 * - return the value of zero
 */
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
/* ...so that this prints 98\n */
return (0);
}
