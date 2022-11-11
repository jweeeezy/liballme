/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_new.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:15:38 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 17:15:52 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_lst	*ft_lst_new(int value)
{
	t_lst	*lst_head;

	lst_head = malloc (sizeof (t_lst));
	if (lst_head == NULL)
		return (NULL);
	(*lst_head).content = value;
	(*lst_head).next = NULL;
	return (lst_head);
}
