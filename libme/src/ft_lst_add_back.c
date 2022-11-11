/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_add_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:13:21 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 17:13:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_lst_add_back(t_lst *lst_to_add, t_lst *node_to_add)
{
	t_lst	*lst_index;

	if (lst_to_add == NULL || node_to_add == NULL)
		return ;
	lst_index = ft_lst_last(lst_to_add);
	(*lst_index).next = node_to_add;
}
