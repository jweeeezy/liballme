/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_count_nodes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:09:50 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/20 12:28:03 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

size_t	ft_lst_count_nodes(t_lst *lst_to_count)
{
	size_t	index;
	t_lst	*lst_index;

	index = 0;
	if (lst_to_count == NULL)
		return (0);
	lst_index = lst_to_count;
	while (lst_index != NULL)
	{
		lst_index = (*lst_index).next;
		index++;
	}
	return (index);
}
