#include "libme.h"

size_t	ft_array_len(void **array_to_count)
{
	size_t	index;

	index = 0;
	if (array_to_count == NULL)
		return (0);
	while (array_to_count[index] != NULL)
		index++;
	return (index);
}

