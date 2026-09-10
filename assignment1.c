/* 
 * Basics of Pointers.
 *
 */

#include <stdio.h>

int main (void)
{
	printf("***Assignment 1: Basics of pointers\n\n\n");

	int n = 13;  //a variable of Integer type
	int *p = &n; //now the pointer p holds the address of the variable n.
	
	printf("***Step 1, 2 - Declarations of the variables\n");
	printf("The number: %d,\n", n);
	printf("The pointer: %p.\n", p);

	printf("\n***Step 3 - The address of the number using the both variables\n");
	printf("The address of the number (using the variable itself): %p,\n", &n);
	printf("The address of the number (using the pointer): %p.\n", p);

	printf("\n***Step 4 - Modifying the value of the number through the pointer\n");
	
	printf("The number before: %d,\n", n);
	printf("/using <*p = 13 * 45> to update the value/\n");
	*p = 13 * 45;
	printf("The number after: %d.\n", n);

	return 0;
}
