/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delete_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:32:04 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 18:56:39 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libme/lst.h>	// needed for t_lst, NULL, free()

void	lm_lst_delete_node(t_lst **lst_head, t_lst *node_to_delete)
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
