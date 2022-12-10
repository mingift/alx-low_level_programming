#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 30; n < 50; n++)
	{
		putchar(n);
		if (n != 49)
		{
			putchar ('.');
			putchar (' ');
		}
	putchar ('\n');
	return (0);
}
