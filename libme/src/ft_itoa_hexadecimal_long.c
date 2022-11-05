/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_hexadecimal_long.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:30:25 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 14:53:55 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static int	ft_ulint_get_digits(unsigned long int int_to_convert)
{
	int	index;

	index = 0;
	while (int_to_convert > 0)
	{
		int_to_convert = int_to_convert / 16;
		index++;
	}
	return (index);
}

static char	*ft_ulint_to_string(unsigned long int int_to_convert,
				int flag_caps)
{
	unsigned long int	int_remain;
	char				*string_return;
	int					index;

	int_remain = 0;
	string_return = NULL;
	index = 0;
	string_return = malloc (sizeof (char)
			* ft_ulint_get_digits(int_to_convert) + 1);
	if (string_return == NULL)
		return (NULL);
	while (int_to_convert != 0)
	{
		int_remain = int_to_convert % 16;
		if (int_remain < 10)
			string_return[index] = '0' + int_remain;
		else if (int_remain >= 10 && flag_caps <= 0)
			string_return[index] = 'a' + (int_remain - 10);
		else if (int_remain >= 10 && flag_caps > 0)
			string_return[index] = 'A' + (int_remain - 10);
		int_to_convert = int_to_convert / 16;
		index++;
	}
	string_return[index] = '\0';
	return (string_return);
}

char	*ft_itoa_hexadecimal_long(unsigned long int int_to_convert,
					int flag_caps)
{
	char	*string_return;

	string_return = NULL;
	if (int_to_convert == 0)
	{
		string_return = malloc(sizeof (char) * 2);
		string_return[0] = '0';
		string_return[1] = '\0';
		return (string_return);
	}
	string_return = ft_ulint_to_string(int_to_convert, flag_caps);
	if (string_return == NULL)
		return (NULL);
	ft_str_rev(string_return);
	return (string_return);
}
