#include<stdio.h>

/**
 * main - entry point
 *
 * Description: print all the numbers of base 16 in lowercase
 *
 * Return: always 0 (successs)
*/

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		puchar(digit);


		if (digit == 57)
			digit += 39;
		digit++;
	}
	puchar('/n');

	return (0);
}

