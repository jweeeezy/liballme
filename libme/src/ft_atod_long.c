/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:15:10 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/22 12:56:17 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"
#include <float.h>
#include "libft.h"

static int	check_algebraic_sign(char *str_to_check)
{
	if (*str_to_check == '-')
		return (-1);
	else if (*str_to_check == '+')
		return (0);
	return (1);
}

static char	check_input_error(char *str_to_check)
{
	if (ft_str_check_viable_char(str_to_check, "01234567890.+-") == 0
		|| ft_str_check_set(str_to_check, "0123456789") == 0
		|| ft_str_check_duplicate_set(str_to_check, ".+-") == 1
		|| ft_str_check_viable_algebraic_signs(str_to_check) == 0)
		return (1);
	return (0);
}

static long double	calculate_fractions(char *str_to_convert)
{
	char		*offset_point;
	char		*offset_end;
	long double	result;

	offset_point = ft_strchr(str_to_convert, '.');
	if (offset_point == NULL || *offset_point + 1 == '\0')
		return (LDBL_MIN);
	if (ft_strlen(offset_point) > 7)
		return (LDBL_MAX);
	result = 0;
	offset_end = offset_point;
	while (*offset_end != '\0')
		offset_end++;
	offset_end--;
	while (offset_end != offset_point)
	{
		result = result / 10 + (*offset_end - 48);
		offset_end--;
	}
	return (result / 10);
}

static long double	calculate_integer(char *str_to_convert)
{
	long double	result;
	size_t		counter;

	result = 0;
	counter = 0;
	while (*str_to_convert != '\0' && *str_to_convert != '.')
	{
		result = result * 10 + (*str_to_convert - 48);
		str_to_convert++;
		counter++;
	}
	if (counter > 10)
		return (LDBL_MAX);
	return (result);
}

long double	ft_atod_long(char *str_to_convert)
{
	int			sign;
	long double	integer;
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
	integer = calculate_integer(str_to_convert);
	if (integer == LDBL_MAX)
		return (LDBL_MAX);
	fractions = calculate_fractions(str_to_convert);
	if (fractions == LDBL_MAX)
		return (LDBL_MAX);
	else if (fractions == LDBL_MIN)
		return (integer * sign);
	return ((integer + fractions) * sign);
}
