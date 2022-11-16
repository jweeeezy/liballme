/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:41:27 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/14 17:46:51 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_lst	*ft_lst_get_value(t_lst *lst_to_search, int value)
{
	t_lst	*lst_index;

	lst_index = lst_to_search;
	while (lst_index != NULL)
	{
		if (lst_index->content == value)
			return (lst_index);
		lst_index = lst_index->next;
	}
	return (NULL);
}
