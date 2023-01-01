/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:55:40 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/01 17:14:09 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

void	ft_lst_print(t_lst *lst_to_print)
{
	while (lst_to_print != NULL)
	{
		ft_lst_print_node(lst_to_print);
		lst_to_print = lst_to_print->next;
	}
}
