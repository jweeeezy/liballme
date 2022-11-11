/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_header_new.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:16:07 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/11 17:17:18 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

t_lst_header	*ft_lst_header_new(char *str_title)
{
	t_lst_header	*lst_return;

	if (str_title == NULL)
		return (NULL);
	lst_return = (t_lst_header *) malloc (sizeof (t_lst_header));
	(*lst_return).title = str_title;
	(*lst_return).head = NULL;
	return (lst_return);
}
