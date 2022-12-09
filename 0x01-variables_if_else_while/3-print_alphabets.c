#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Reutun: Always 0
 */
int main(void)
{
	Chr ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar ('\n');

	return (0);
}
