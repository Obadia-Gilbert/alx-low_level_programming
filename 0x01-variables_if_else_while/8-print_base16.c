#include <stdio.h>
/**
 * main - Enty Point
 * Description: print base 16
 * Return: Always 0 (success)
 */
int main(void)
{
	int d;
	char c;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

