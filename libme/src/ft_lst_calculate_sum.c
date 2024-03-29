/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_calculate_sum.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:37:16 by jwillert          #+#    #+#             */
/*   Updated: 2023/04/17 23:00:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

long	ft_lst_calculate_sum(t_lst *lst_to_calculate)
{
	long	sum;

	sum = 0;
	if (lst_to_calculate == NULL)
		return (0);
	while (lst_to_calculate != NULL)
	{
		sum = sum + lst_to_calculate->content;
		lst_to_calculate = lst_to_calculate->next;
	}
	return (sum);
}
