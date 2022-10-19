#include "libme.h"

void	ft_input_print(char **array_to_print)
{
	size_t	index;

	index = 0;
	while (array_to_print[index] != NULL)
	{
		ft_putstr_fd(array_to_print[index], 1);
		ft_putchar_fd('\n', 1);
		index++;
	}
}
