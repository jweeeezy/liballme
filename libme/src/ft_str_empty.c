#include "libme.h"

char	*ft_str_empty(void)
{
	char	*str_return;

	str_return = malloc (sizeof (char) * 1);
	if (str_return == NULL)
		return (NULL);
	str_return[0] = '\0';
	return (str_return);
}

