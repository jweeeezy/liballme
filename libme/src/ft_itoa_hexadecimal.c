/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:30:25 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/14 16:48:19 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static int	ft_uint_get_digits(unsigned int uint_to_convert)
{
	int	index;

	index = 0;
	while (uint_to_convert > 0)
	{
		uint_to_convert = uint_to_convert / 16;
		index++;
	}
	return (index);
}

static char	*ft_uint_to_string(unsigned int uint_to_convert, int flag_caps)
{
	unsigned int		uint_remain;
	char				*str_return;
	int					index;

	uint_remain = 0;
	index = 0;
	str_return = malloc (sizeof (char)
			* ft_uint_get_digits(uint_to_convert) + 1);
	if (str_return == NULL)
		return (NULL);
	while (uint_to_convert != 0)
	{
		uint_remain = uint_to_convert % 16;
		if (uint_remain < 10)
			str_return[index] = '0' + uint_remain;
		else if (uint_remain >= 10 && flag_caps <= 0)
			str_return[index] = 'a' + (uint_remain - 10);
		else if (uint_remain >= 10 && flag_caps > 0)
			str_return[index] = 'A' + (uint_remain - 10);
		uint_to_convert = uint_to_convert / 16;
		index++;
	}
	str_return[index] = '\0';
	return (str_return);
}

char	*ft_itoa_hexadecimal(unsigned int uint_to_convert, int flag_caps)
{
	char	*str_return;

	str_return = NULL;
	if (uint_to_convert == 0)
	{
		str_return = malloc(sizeof (char) * 2);
		str_return[0] = '0';
		str_return[1] = '\0';
		return (str_return);
	}
	str_return = ft_uint_to_string(uint_to_convert, flag_caps);
	if (str_return == NULL)
		return (NULL);
	ft_str_reverse(str_return);
	return (str_return);
}
