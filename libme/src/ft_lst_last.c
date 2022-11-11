/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_last.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:11:57 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 17:12:08 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_lst	*ft_lst_last(t_lst *lst_to_iterate)
{
	t_lst	*lst_index;

	if (lst_to_iterate == NULL)
		return (NULL);
	lst_index = lst_to_iterate;
	while ((*lst_index).next != NULL)
		lst_index = (*lst_index).next;
	return (lst_index);
}
