/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_find_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:50:04 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:36:37 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_str_find_char(char const *str_to_search, char const char_to_find)
{
	size_t	index;

	index = 0;
	if (str_to_search == NULL)
		return (0);
	while (str_to_search[index] != '\0')
	{
		if (str_to_search[index] == char_to_find)
			return (1);
		index++;
	}
	return (0);
}
