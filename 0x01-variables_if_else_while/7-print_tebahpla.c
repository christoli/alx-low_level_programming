#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charct;

	for (charct = 'z'; charct >= 'a'; charct--)
	{
		putchar(charct);
	}
	putchar('\n');
	return (0);
}
