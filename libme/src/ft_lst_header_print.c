/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_header_print.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:54:31 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/01 18:29:27 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"
#include "libft.h"

void	ft_lst_header_print(t_lst_header *lst_to_print)
{
	ft_putstr_fd("List name: ", 1);
	ft_putstr_fd(lst_to_print->title, 1);
	ft_putchar_fd('\n', 1);
	ft_lst_print(lst_to_print->head);
}
