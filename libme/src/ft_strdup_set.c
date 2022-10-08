#include "libme.h"

static size_t	 count_char_found(char const *str_to_search, char const *str_set_to_find)
{
	size_t	counter;
	size_t	index;

	counter = 0;
	index = 0;
	while (str_to_search[index] != '\0')
	{
		if (ft_str_find_char(str_set_to_find, str_to_search[index]))
			counter++;
		index++;
	}	
	return (counter);
}

char	*ft_strdup_set(char const *str_to_search, char const *str_set_to_find)
{
	size_t	index;
	size_t	counter;
	char	*str_duplicate;

	index = 0;
	str_duplicate = NULL;
	if (str_to_search == NULL || str_set_to_find == NULL)
		return (NULL);
	counter = count_char_found(str_to_search, str_set_to_find);	
	if (counter == 0)
		return (NULL);
	str_duplicate = malloc (sizeof (char) * counter + 1);
	if (str_duplicate == NULL)
		return (NULL);
	counter = 0;
	while (str_to_search[index] != '\0')
	{
		if (ft_str_find_char(str_set_to_find, str_to_search[index]))
		{
			str_duplicate[counter] = str_to_search[index];
			counter++;
		}
		index++;
	}
	str_duplicate[counter] = '\0';
	return (str_duplicate);
}

