#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{	printf(" Size of a Char: % byte(s)\n", Sizeof(char));
	printf(" Size of an int: % byte(s)\n", Sizeof(int));
	printf(" Size of a long int: % byte(s)\n", Sizeof(longint));
	printf(" Size of a long long int: % byte(s)\n", Sizeof(longlongint));
	printf(" Size of a float: % byte(s)\n", Sizeof(float));
	return(0);
}
