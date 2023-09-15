#include <stdio.h>
#include <stdarg.h>

void select(char *obj);

/**
 * print_all - prints all
 * @format: stuff
 * Definition - prints stuff
 * Return: none
*/

void print_all(const char * const format, ...)
{
	va_list objects;
	char *obj;
	int i;
	int type_int;

	i = 0;

	va_start(objects, format);
	while (format[i] != '\0' && format != NULL)
	{
		type_int = (int)format[i];
		switch (type_int)
		{
			case 99:
				printf("%c", va_arg(objects, int));
				break;
			case 105:
				printf("%d", va_arg(objects, int));
				break;
			case 102:
				printf("%f", va_arg(objects, double));
				break;
			case 115:
				obj = va_arg(objects, char *);
				select(obj);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' && (format[i + 1] == 99 ||
			format[i + 1] == 105 || format[i + 1] == 102
			|| format[i + 1] == 115))
			/*&& (format[i + 1] == 99 || type_int == 105*/
			/*|| type_int == 102 || type_int == 115))*/
			printf(", ");
		i++;
	}
	printf("\n");
}

/**
 * select - chooses which string to print
 * @obj: the string to consider
 * Description - prints nil if NULL, obj if not NULL
 * Return: void
*/

void select(char *obj)
{
	if (obj != NULL)
	{
		printf("%s", obj);
		return;
	}
	printf("(nil)");
}
