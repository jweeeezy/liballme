/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_calculate_average.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:55:04 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:31:37 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

long	ft_lst_calculate_average(t_lst *lst_to_calculate)
{
	long	average;
	long	sum;
	size_t	count_nodes;

	average = 0;
	sum = ft_lst_calculate_sum(lst_to_calculate);
	count_nodes = ft_lst_count_nodes(lst_to_calculate);
	average = sum / (long) count_nodes;
	return (average);
}
