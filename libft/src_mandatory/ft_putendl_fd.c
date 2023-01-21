/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:05:29 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:09:17 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str_to_print, int fd)
{
	int	index;

	if (str_to_print == NULL)
		return ;
	index = 0;
	while (str_to_print[index] != '\0')
	{
		ft_putchar_fd(str_to_print[index], fd);
		index++;
	}
	ft_putchar_fd('\n', fd);
}
