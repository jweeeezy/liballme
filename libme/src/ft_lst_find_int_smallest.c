/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_int_smallest.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:38:41 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/14 13:40:43 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

int	ft_lst_find_int_smallest(t_lst *lst_to_search)
{
	int	int_min;

	int_min = lst_to_search->content;
	while (lst_to_search != NULL)
	{
		if (int_min > lst_to_search->content)
			int_min = lst_to_search->content;
		lst_to_search = lst_to_search->next;
	}
	return (int_min);
}
