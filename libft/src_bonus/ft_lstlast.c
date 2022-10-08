/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:07:09 by jwillert          #+#    #+#             */
/*   Updated: 2022/07/17 13:33:52 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_index;

	if (lst == NULL)
		return (NULL);
	lst_index = lst;
	while ((*lst_index).next != NULL)
		lst_index = (*lst_index).next;
	return (lst_index);
}
