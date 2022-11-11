/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_check_viable_char.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:54:54 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 16:56:35 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	ft_str_check_viable_char(const char *str_to_check, const char *str_set)
{
	size_t	index;

	if (str_to_check == NULL || str_set == NULL)
		return (0);
	index = 0;
	while (str_to_check[index] != '\0')
	{
		if (ft_str_find_char(str_set, str_to_check[index]) == 0)
			return (0);
		index++;
	}
	return (1);
}
