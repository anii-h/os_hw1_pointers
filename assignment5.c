/*
 * Strings and Character
 *	Pointers
 */

#include <unistd.h>
#include <stdio.h>

void printStr(char *p)
{
	while(*p)
	{
		write(1, p, 1);
		p++;
	}

	write(1, "\n", 1);
}


int strLen(char *p)
{
	int i = 0;

	while(*p++)
		i++;

	return i;
}


int main(void)
{
	char str[] = "Hello";
	char *p = str;

	printStr(p);

	printf("The lentgth of the string is: %d\n", strLen(p));

	return 0;
}
