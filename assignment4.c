/*
 * Pointers to
 *	Pointers
 */

#include <stdio.h>

int main(void)
{

	int a = 9;
	int *p = &a;
	int **pp = &p;

	printf("The value of the integer: %d\n", a);
	printf("The value of the integer using the pointer: %d\n", *p);
	printf("The value of the integer using the double pointer: %d\n", **pp);
	return 0;
}
