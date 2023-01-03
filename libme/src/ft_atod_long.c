/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:15:10 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/03 14:00:19 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

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

static long double	shift_fractions(char *str_to_convert, long int fractions)
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

static long double	calculate_fractions(char *str_to_convert)
{
	char		*offset_point;
	long int	fractions;
	long double	result;

	offset_point = ft_strchr(str_to_convert, '.');
	if (offset_point == NULL)
		return (LDBL_MIN);
	offset_point++;
	if (*offset_point == '\0')
		return (LDBL_MIN);
	fractions = ft_atoi_long(offset_point);
	if (fractions == LONG_MAX)
		return (LDBL_MAX);
	result = shift_fractions(offset_point, fractions);
	return (result);
}

long double	ft_atod_long(char *str_to_convert)
{
	int			sign;
	long int	integer;
	long double	fractions;

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
	fractions = calculate_fractions(str_to_convert);
	if (fractions == LDBL_MAX)
		return (LDBL_MAX);
	else if (fractions == LDBL_MIN)
		return ((long double) integer * sign);
	return (((long double) integer + fractions) * sign);
}
