/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:49:16 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/30 19:17:21 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_lst_free(t_lst **lst_to_free)
{
	t_lst	*lst_temp;

	while (lst_to_free != NULL && *lst_to_free != NULL)
	{
		lst_temp = (*lst_to_free)->next;
		free(*lst_to_free);
		*lst_to_free = lst_temp;
	}
}
