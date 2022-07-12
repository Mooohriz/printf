#include "main.h"
#include <stddef.h>

/**
 * prntfunc - look for the specifier
 * @x: variable to the function
 * Return: function
 */
int (*prntfunc(char x))(va_list)
{
	int i = 0;
	conver_t arr[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};
	while (arr[i].sym)
	{
		if (x == arr[i].sym[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}

