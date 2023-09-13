#include"main.h"

/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase using putchar
 *
 * Return: alwaysn0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
