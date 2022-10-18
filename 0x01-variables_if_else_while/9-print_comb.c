#include <stdio.h>
#include <unistd>
/**
 * main - Entry point
 * Description: prints numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = '0'; 1 <= '9'; 1++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar('');
		}
	}

	putchar('\n');
	return (0);
}
