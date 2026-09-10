/*
 * Pointer Arithmetic.
 *
 */

#include <stdio.h>

void traverseArray(int *p, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d\n", *(p + i));
}

int main (void)
{
	printf("***Assignment 2: Pointer Artihmetic\n\n\n");
	
	int arr[5] = {2, 4, 6, 0, 1};   //Step 1
	int *p = arr; 			//right now p pointer points to the very fist element of the array

	printf("***Step 2 - Traversing the array using the pointer\n");
	traverseArray(p, 5);

	printf("\n\n***Step 3 - Modifying the values of array using pointer arithmetic\n");
	for (int i = 0; i < 5; i++)
		*(p + i) *= 3;

	printf("***Step 4 - Printing the resulted array:\n1. Using the pointer:\n");
	traverseArray(p, 5);

	printf("\n2. Using the array:\n");
	for (int i = 0; i < 5; i++) 
		printf("%d\n", arr[i]);


	return 0;
}

