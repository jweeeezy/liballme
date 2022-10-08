/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:07:25 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 12:46:12 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *node_to_add)
{
	t_list	*lst_index;

	lst_index = *lst;
	if (lst == NULL || node_to_add == NULL)
		*lst = node_to_add;
	if (*lst == NULL)
	{
		*lst = node_to_add;
		return ;
	}
	while ((*lst_index).next != NULL)
		lst_index = (*lst_index).next;
	(*lst_index).next = node_to_add;
}
