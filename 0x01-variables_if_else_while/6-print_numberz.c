#include <stdio.h>
/**
 * main - Entry Point
 * Description: print digits using putchar 1-9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (d = '0'; d < '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
