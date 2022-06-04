#include <stdio.h>
/**
 * main - prints all possible combinations of two different digits,
 * in ascending order,seperated by a comma followed by a space
 *
 *Return: Always 0
 */
int main(void)
{
	int c;
	int d = 0;
	
	while (d < 10)
	{
		c = 0;
		while (c < 10)
		{
			if (d != c && d < c)
			{
				putchar('0' + d);
				putchar(' ');
			}
		}
		c++;
	}
	d++;
}
putchar('\n');
putchar('\n');
}

