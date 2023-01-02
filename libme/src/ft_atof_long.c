/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:15:10 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/02 16:22:42 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

static long double	convert_to_float(char *str_to_convert)
{
	long double	result;



	return (result);
}

long double	ft_atof_long(char *str_to_convert)
{
	char	*set_viable;

	set_viable = "01234567890.+-f";

	if (str_to_convert == NULL)
		return (LDBL_MIN);
	if (ft_str_check_viable_char(str_to_convert, set_viable) == 1
		|| ft_str_check_set(str_to_convert, set_viable) == 0
		|| ft_str_check_duplicate_set(str_to_convert, ".+-f") == 1)
		return (LDBL_MAX);
	result = convert_to_float(str_to_convert);
	return (result);
}
