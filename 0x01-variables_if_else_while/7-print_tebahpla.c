#include <stdio.h>
/**
 * main - Entry Point
 * Description: print alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c <= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}


