#include "libme.h"

char	*ft_array_strjoin(char **argv)
{
	size_t	index;
	char	*str_return;

	if (argv == NULL)
		return (NULL);
	index = 1;
	str_return = ft_str_empty();
	if (str_return == NULL)
		return (NULL);
	while (argv[index] != NULL)
	{
		str_return = ft_strjoin(str_return, argv[index]);
		str_return = ft_strjoin(str_return, " ");
		index++;
	}
	return (str_return);
}

