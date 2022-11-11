/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_check_duplicate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:19:45 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 17:19:59 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	ft_lst_check_duplicate(t_lst **lst_to_check)
{
	t_lst	*lst_index;
	t_lst	*lst_index_compare;

	if (lst_to_check == NULL)
		return (0);
	lst_index = *lst_to_check;
	while (lst_index != NULL)
	{
		lst_index_compare = (*lst_index).next;
		while (lst_index_compare != NULL)
		{
			if ((*lst_index_compare).content == (*lst_index).content)
				return (1);
			lst_index_compare = (*lst_index_compare).next;
		}
		lst_index = (*lst_index).next;
	}
	return (0);
}
