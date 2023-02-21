#include <stdio.h>
/* betty style doc for function main goes there*/
/**
 * main - is the main function
 *
 * Return: always return 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
			putchar (i);
	}
	putchar('\n');
	return (0);
}
