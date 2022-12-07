#include "shell.h"

/**
 * _print_env - Prints the environment built in
 *
 * Return: Nothing to return
 */
void _print_env(void)
{
	int i = 0, j = 0;

	while (envireon[i])
	{
		j = 0;
		while (envireon[i][j])
		{
			_putchar(envireon[i][j]);
			j++;
		}

		if (j != 0)
			_putchar('\n');
		i++;
	}
}
