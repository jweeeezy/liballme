/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_check_duplicate_set.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:59:56 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:34:46 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	ft_str_check_duplicate_set(char *str_to_check, char *set_to_check)
{
	size_t	index_set;

	index_set = 0;
	if (str_to_check == NULL)
		return (0);
	while (set_to_check[index_set] != '\0')
	{
		if (ft_str_check_duplicate_char(str_to_check,
				set_to_check[index_set]) == 1)
			return (1);
		index_set++;
	}
	return (0);
}
