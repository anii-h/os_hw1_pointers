/*
 * Pointers and 
 *	Functions.
 */

#include <stdio.h>

void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

int main(void)
{
	int a = 8;
	int b = 7;

	printf("***The values of {a} and {b} BEFORE calling the function swap()\n");
	printf("**The value of {a}: %d\n", a);
	printf("**The value of {b}: %d\n", b);
	swap(&a, &b);

	printf("\n\n***The values of {a} and {b} AFTER calling the swap()\n");
	printf("**The value of {a}: %d\n", a);
	printf("**The value of {b}: %d\n", b);

	return 0;
}
