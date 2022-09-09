#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 38; i < 48; i++)
	{
		putchar(i);
		if (i != 47)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
