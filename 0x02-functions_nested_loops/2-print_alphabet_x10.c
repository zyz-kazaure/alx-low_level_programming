#include "main.h"
/**
 *  * print_alphabet_x10 - print alphabets x10
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 1;
	while (i <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}

}
