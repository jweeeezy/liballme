/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find_int_max.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:30:25 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/13 15:33:37 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

int	ft_lst_find_int_max(t_lst *lst_to_search)
{
	int	int_max;

	int_max = lst_to_search->content;
	while (lst_to_search != NULL)
	{
		if (int_max < lst_to_search->content)
			int_max = lst_to_search->content;
		lst_to_search = lst_to_search->next;
	}
	return (int_max);
}
