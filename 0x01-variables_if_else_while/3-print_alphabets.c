#include <stdio.h>
/**
 * main - Entry Point
 * Description: Print Characters using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
	return (0);
}
