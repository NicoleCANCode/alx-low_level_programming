#include <stdio.h>
/**
 * main - Print a[2] = 98;
 * Return: 0;
 */
int main(void)
{
int n;
int a[5];
int *p;

*p = &n;
/* write your line of code here...*/
/* Remember:*/
/* - you are not allowed to use a*/
/* - you are not allowed to code anything else than this line of code*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
