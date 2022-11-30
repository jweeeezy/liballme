/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delete_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:32:04 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/30 13:53:44 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_lst_delete_node(t_lst **lst_head, t_lst *node_to_delete)
{
	if (*lst_head == NULL)
		return ;
	if (*lst_head == node_to_delete)
	{
		(*lst_head) = node_to_delete->next;
		free (node_to_delete);
		return ;
	}
	while ((*lst_head)->next != node_to_delete)
		lst_head = &(*lst_head)->next;
	(*lst_head)->next = node_to_delete->next;
	free (node_to_delete);
}
