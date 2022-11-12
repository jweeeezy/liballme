/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_strjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:45 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/12 14:10:06 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static char	*ft_merge(char **argv, char *str_merge)
{
	size_t	index_array;
	size_t	index_str;
	size_t	input_length;

	index_str = 0;
	index_array = 0;
	input_length = 0;
	while (argv[index_array] != NULL)
	{
		while (argv[index_array][index_str] != '\0')
		{
			str_merge[input_length] = argv[index_array][index_str];
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

char	*ft_input_strjoin(char **argv)
{
	char	*str_return;

	if (argv == NULL)
		return (NULL);
	str_return = (char *) malloc (sizeof (char) * ft_input_len(argv)
			+ ft_input_argc(argv));
	if (str_return == NULL)
		return (NULL);
	str_return = ft_merge(argv, str_return);
	return (str_return);
}
