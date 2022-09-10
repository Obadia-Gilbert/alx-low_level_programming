#include <stdio.h>
/**
 * main - Entry Point
 * Description: print two number combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	int d2;

	for (d = 0; d < 9; d++)
	{
		for (d2 = d + 1; d2 < 10; d2++)
		{
			putchar((d % 10) + '0');
			putchar((d2 % 10) + '0');
			if (d != 8 && d2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
