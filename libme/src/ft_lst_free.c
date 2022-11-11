/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:49:16 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 15:45:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_lst_free(t_lst *lst_to_free)
{
	t_lst	*prev;

	prev = lst_to_free;
	while (lst_to_free != NULL)
	{
		prev = lst_to_free;
		lst_to_free = lst_to_free->next;
		free(prev);
	}
}
