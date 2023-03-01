#include "_putchar.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m = "_putchar";

	while (m)
	{
		_putchar(m);
		m++;
	}
	_putchar('\n');

	return (0);
}
