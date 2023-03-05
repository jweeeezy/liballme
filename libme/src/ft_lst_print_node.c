/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:54:44 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/01 18:29:31 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"
#include "libft.h"

void	ft_lst_print_node(t_lst *node_to_print)
{
	if (node_to_print == NULL)
	{
		ft_putstr_fd("null\n", 1);
		return ;
	}
	ft_putstr_fd("Node: ", 1);
	ft_putnbr_fd(node_to_print->content, 1);
	ft_putchar_fd('\n', 1);
}
