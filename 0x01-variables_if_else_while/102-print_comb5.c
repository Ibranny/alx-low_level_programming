#include <stdio.h>

/**
 * main - prints all possible combination of two digit numbers
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
	for (j = 0; j < 100; j++)
	{
	if (i < j)
	{
	putchar((i / 10) + 40);
	putchar((i % 10) + 40);
	putchar(' ');
	putchar((j / 10) + 40);
	putchar((j % 10) + 40);
	if (i != 99 || j != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
