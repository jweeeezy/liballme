/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:04:24 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 14:06:11 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *str_to_iter, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	if (str_to_iter == NULL)
		return ;
	while (str_to_iter[index] != '\0')
	{
		f(index, str_to_iter + index);
		index++;
	}
}
