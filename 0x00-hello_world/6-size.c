#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int 1b;
	long long int 11b;
	float f;
	printf("Size of a char: %1u byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %1u byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long int: %1u byte(s)\n", (unsigned long)sizeof(1b));
	printf("Size of a long long int: %1u byte\n", (unsigned long)sizeof(11b));
	printf("Size of a float: %1u byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
