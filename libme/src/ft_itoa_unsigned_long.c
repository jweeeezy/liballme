/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned_long.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert@student.42heilbronn.de            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:41:59 by jwillert          #+#    #+#             */
/*   Updated: 2023/04/08 12:47:01 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include "libme.h"

static int	get_digits(unsigned long int int_to_convert)
{
	int	index;

	index = 0;
	while (int_to_convert > 0)
	{
		int_to_convert = int_to_convert / 10;
		index++;
	}
	return (index);
}

static char	*ulint_to_string(unsigned long int int_to_convert)
{
	unsigned long int	int_remain;
	char				*string_return;
	int					index;

	int_remain = 0;
	string_return = NULL;
	index = 0;
	string_return = malloc (sizeof (char)
			* get_digits(int_to_convert) + 1);
	if (string_return == NULL)
		return (NULL);
	while (int_to_convert != 0)
	{
		int_remain = int_to_convert % 10;
		if (int_remain < 10)
			string_return[index] = '0' + int_remain;
		int_to_convert = int_to_convert / 10;
		index++;
	}
	string_return[index] = '\0';
	return (string_return);
}

char	*ft_itoa_unsigned_long(unsigned long int int_to_convert)

{
	char	*string_return;

	string_return = NULL;
	if (int_to_convert == 0)
	{
		return (ft_strdup("0"));
	}
	string_return = ulint_to_string(int_to_convert);
	if (string_return == NULL)
		return (NULL);
	ft_str_reverse(string_return);
	return (string_return);
}
