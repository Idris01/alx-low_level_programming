#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - Prints all supplied arguments based
 * on specified format
 * @format: pointer to string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list items;
	int i, size = strlen(format), addsep;
	char type, *str_val;

	va_start(items, format);

	i = 0;
	while (i < size)
	{
		type = *(format + i);
		addsep = 1;
		switch (type)
		{
			case 'c':
				printf("%c", va_arg(items, int));
				break;
			case 'i':
				printf("%d", va_arg(items, int));
				break;
			case 'f':
				printf("%f", va_arg(items, double));
				break;
			case 's':
				str_val = va_arg(items, char *);
				if (str_val != NULL)
					printf("%s", str_val);
				if (str_val == NULL)
					printf("(nil)");
				break;
			default:
				addsep = 0;
				break;
		}
		if (i < size - 1 && addsep)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(items);
}


