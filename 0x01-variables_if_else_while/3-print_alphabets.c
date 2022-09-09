#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}

	x = 'A';

	while (x <= 'Z')
	{
		putchar(x);
		x++;
	}

	putchar('\n');
	return (0);
}
