/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_check_viable_precursor_digit.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:52:04 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:35:52 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_str_check_viable_precursor_digit(const char *str_to_check,
			char c_precursor, char c_to_check)
{
	size_t	index;

	if (str_to_check == NULL)
		return (0);
	index = 0;
	while (str_to_check[index] != '\0')
	{
		if (str_to_check[index] == c_to_check)
		{
			if (ft_isdigit(str_to_check[index + 1]) == 0
				|| (str_to_check[index - 1] != c_precursor && index > 0))
				return (0);
		}
		index++;
	}
	return (1);
}
