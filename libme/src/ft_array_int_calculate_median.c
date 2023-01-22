/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_int_calc_median.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:06:08 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/22 11:40:30 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_array_int_calculate_median(int *array, size_t size_array)
{
	int		median;

	median = 0;
	if (array == NULL)
		return (median);
	if (size_array % 2 == 0)
		median = array[size_array / 2];
	else if (size_array % 2 == 1)
		median = array[size_array / 2] + array[size_array / 2 + 1] / 2;
	return (median);
}
