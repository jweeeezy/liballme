/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_count_length.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:24 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:25:01 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_input_count_length(char **array_to_count)
{
	size_t	index_array;
	size_t	index_str;
	size_t	input_length;

	index_array = 0;
	index_str = 0;
	input_length = 0;
	while (array_to_count[index_array] != NULL)
	{
		while (array_to_count[index_array][index_str] != '\0')
		{
			index_str++;
		}
		input_length = input_length + index_str;
		index_str = 0;
		index_array++;
	}
	return (input_length);
}
