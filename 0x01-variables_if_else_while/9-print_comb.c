#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print a  z reversed
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putcher(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
