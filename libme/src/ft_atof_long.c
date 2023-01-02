/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:15:10 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/02 19:24:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"


#include <stdio.h>

static int	check_algebraic_sign(char *str_to_check)
{
	if (*str_to_check == '=')
		return (-1);
	else if (*str_to_check == '+')
		return (0);
	return (1);
}

static char	check_input_error(char *str_to_check)
{
	if (ft_str_check_viable_char(str_to_check, "01234567890.+-") == 0
		|| ft_str_check_set(str_to_check, "01234567890.+-") == 0
		|| ft_str_check_duplicate_set(str_to_check, ".+-") == 1)
		return (1);
	return (0);
}

long double	shift_fractions(long int fractions, char *str_to_convert)
{
	long double	result;
	size_t		length;

	result = (long double) fractions;
	length = ft_strlen(str_to_convert);
	while (length > 0)
	{
		result = result / 10;
		length--;
	}
	return (result);
}

long double	ft_atof_long(char *str_to_convert)
{
	int			sign;
	long int	integer;
	long int	fractions;
	char		*offset_point;

	if (str_to_convert == NULL)
		return (LDBL_MIN);
	if (check_input_error(str_to_convert) == 1)
		return (LDBL_MAX);
	sign = check_algebraic_sign(str_to_convert);
	if (sign < 1)
	{
		if (sign == 0)
			sign = 1;
		str_to_convert++;
	}
	integer = ft_atoi_long(str_to_convert);
	if (integer == LONG_MAX)
		return (LDBL_MAX);
	offset_point = ft_strchr(str_to_convert, '.');
	if (offset_point == NULL || *(++offset_point) == '\0')
		return ((long double) integer * sign);
	fractions = ft_atoi_long(offset_point);
	if (fractions == LONG_MAX)
		return (LDBL_MAX);

	printf("integer: %ld\n", integer);
	printf("%c\n", *offset_point);
	printf("fractions: %ld\n", fractions);
	return ((shift_fractions(fractions, offset_point) + (long double) integer) * sign);
}
