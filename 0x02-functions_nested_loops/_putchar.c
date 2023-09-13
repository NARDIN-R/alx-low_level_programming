#include<unistd.h>
#include"main.h"

/**
 * main - entry point
 *
 * Description:  _putchar -  writes the character c to stdout
 * @c: the character to print
 *
 * Return: always 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
