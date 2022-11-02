/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 09:49:16 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/02 09:50:44 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static size_t	str_iter_spaces(char *str_to_iter)
{
	size_t	index;

	index = 0;
	while ((str_to_iter[index] == ' ')
		|| (str_to_iter[index] == '\b')
		|| (str_to_iter[index] == '\t')
		|| (str_to_iter[index] == '\v')
		|| (str_to_iter[index] == '\n')
		|| (str_to_iter[index] == '\f')
		|| (str_to_iter[index] == '\r'))
		index++;
	return (index);
}

static long int	str_to_lint(char *str_to_convert, size_t index,
		char sign_algebraic)
{
	long int	lint_return;

	lint_return = 0;
	if (!(str_to_convert[index] >= 48 && str_to_convert[index] <= 57))
		return (9999999991);
	while (str_to_convert[index] != '\0'
		&& str_to_convert[index] >= 48
		&& str_to_convert[index] <= 57)
	{
		lint_return = (lint_return * 10) + (str_to_convert[index] - 48);
		index++;
	}
	if (lint_return * sign_algebraic > 2147483647
		|| lint_return * sign_algebraic < -2147483648)
		return (9999999999);
	return (lint_return * sign_algebraic);
}

long int	ft_atoi_long(char *str_to_convert)
{
	char		sign_algebraic;
	size_t		index;

	if (str_to_convert == NULL)
		return (9999999991);
	sign_algebraic = 1;
	index = str_iter_spaces(str_to_convert);
	if (str_to_convert[index] == '+' || str_to_convert[index] == '-')
	{
		if (str_to_convert[index] == '-')
			sign_algebraic = -1;
		index++;
	}
	return (str_to_lint(str_to_convert, index, sign_algebraic));
}
