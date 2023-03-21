#include "main.h"

/**
  * main - main function that prints 10x alphabets
  *
  * Return: void
*/

int main(void)

{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
