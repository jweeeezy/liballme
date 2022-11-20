/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:11:11 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/20 12:26:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_lst	*ft_lst_get_index(t_lst *lst_to_iterate, size_t index)
{
	t_lst	*lst_index;

	if (lst_to_iterate == NULL)
		return (NULL);
	lst_index = lst_to_iterate;
	while (index != 0 && lst_index->next != NULL)
	{
		lst_index = (*lst_index).next;
		index--;
	}
	return (lst_index);
}
