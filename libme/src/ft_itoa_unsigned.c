/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:03:26 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:30:55 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static int	get_digits(unsigned int uint_to_convert, int int_digits)
{
	while (uint_to_convert / 10 != 0)
	{
		uint_to_convert = uint_to_convert / 10;
		int_digits++;
	}
	return (int_digits);
}

static char	*uint_to_str(char *str_return,
		unsigned int uint_to_convert, int int_digits)
{
	int_digits = get_digits(uint_to_convert, int_digits);
	str_return = malloc (sizeof(char) * (int_digits + 1));
	if (str_return == NULL)
		return (NULL);
	str_return[int_digits] = '\0';
	int_digits--;
	while (int_digits >= 0)
	{
		str_return[int_digits] = (uint_to_convert % 10) + '0';
		uint_to_convert = uint_to_convert / 10;
		int_digits--;
	}
	return (str_return);
}

char	*ft_itoa_unsigned(unsigned int uint_to_convert)
{
	int		int_digits;
	char	*str_return;

	int_digits = 1;
	str_return = NULL;
	if (uint_to_convert > 0)
		str_return = uint_to_str(str_return, uint_to_convert, int_digits);
	else if (uint_to_convert == 0)
	{
		str_return = malloc (sizeof(char) * (2));
		if (str_return == NULL)
			return (NULL);
		str_return[0] = '0';
		str_return[1] = '\0';
	}
	return (str_return);
}
