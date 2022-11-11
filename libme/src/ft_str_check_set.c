/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_check_set.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:48:02 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 16:56:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	ft_str_check_set(const char *str_to_check, const char *str_set)
{
	size_t	index;
	size_t	index_set;

	index = 0;
	index_set = 0;
	if (str_to_check == NULL || str_set == NULL)
		return (0);
	while (str_to_check[index] != '\0')
	{
		index_set = 0;
		while (str_set[index_set] != '\0')
		{
			if (str_to_check[index] == str_set[index_set])
				return (1);
			index_set++;
		}
		index++;
	}
	return (0);
}
