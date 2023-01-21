/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:49:49 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:24:04 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_input_print(char **array_to_print)
{
	size_t	index;

	index = 0;
	while (array_to_print[index] != NULL)
	{
		ft_putstr_fd(array_to_print[index], 1);
		ft_putchar_fd('\n', 1);
		index++;
	}
}
