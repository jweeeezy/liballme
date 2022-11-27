/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_get_duplicate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:08:22 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/27 19:29:04 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"


t_lst	*ft_lst_get_duplicate(t_lst *lst_to_duplicate)
{
	t_lst	*lst_return;

	if (lst_to_duplicate == NULL)
		return (NULL);
	lst_return = ft_lst_get_new(lst_to_duplicate->content);
	if (lst_return == NULL)
		return (NULL);
	lst_to_duplicate = lst_to_duplicate->next;
	while (lst_to_duplicate != NULL)
	{
		ft_lst_add_back(lst_return,
			ft_lst_get_new(lst_to_duplicate->content));
		lst_to_duplicate = lst_to_duplicate->next;
	}
	return (lst_return);
}