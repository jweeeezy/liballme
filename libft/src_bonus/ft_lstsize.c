/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:06:53 by jwillert          #+#    #+#             */
/*   Updated: 2022/04/29 12:20:30 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	index;

	index = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		lst = (*lst).next;
		index++;
	}
	return (index);
}
