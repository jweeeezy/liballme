/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_strjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:45 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:26:38 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static char	*merge(char **array_to_combine, char *str_merge)
{
	size_t	index_array;
	size_t	index_str;
	size_t	input_length;

	index_str = 0;
	index_array = 0;
	input_length = 0;
	while (array_to_combine[index_array] != NULL)
	{
		while (array_to_combine[index_array][index_str] != '\0')
		{
			str_merge[input_length]
				= array_to_combine[index_array][index_str];
			input_length++;
			index_str++;
		}
		str_merge[input_length++] = ' ';
		index_str = 0;
		index_array++;
	}
	str_merge[input_length - 1] = '\0';
	return (str_merge);
}

char	*ft_input_strjoin(char **array_to_combine)
{
	char	*str_return;

	if (array_to_combine == NULL)
		return (NULL);
	str_return = (char *) malloc (sizeof (char)
			* ft_input_count_length(array_to_combine)
			+ ft_input_count_arguments(array_to_combine));
	if (str_return == NULL)
		return (NULL);
	str_return = merge(array_to_combine, str_return);
	return (str_return);
}
