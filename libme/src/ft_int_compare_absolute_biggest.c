/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_compare_absolute_biggest.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:32:33 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/15 18:35:28 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	ft_int_compare_absolute_biggest(int value_a, int value_b)
{
	if (value_a < 0)
		value_a = value_a * -1;
	if (value_b < 0)
		value_b = value_b * -1;
	if (value_a > value_b)
		return (-1);
	else if (value_b > value_a)
		return (1);
	return (0);
}
