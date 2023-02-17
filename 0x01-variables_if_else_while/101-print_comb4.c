#include <stdio.h>

/**
 * main - Entrypoint
 *	Prints all possible three digits combination with
 *	the least sum
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
	int num2;
	int num3;

	for (num = '0'; num <= '7' ; num++)
	{
		for (num2 = '0'; num2 <= '8' ; num2++)
		{
			if (num == num2)
				continue;
			for (num3 = '0'; num3 <= '9'; num3++)
			{
				if ((num < num2) && (num2 < num3))
				{
					putchar(num);
					putchar(num2);
					putchar(num3);
					if ((num != '7') || (num2 != '8') || (num3 != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
