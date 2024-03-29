/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:45:45 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:37:21 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_str_reverse(char *str_to_reverse)
{
	char	c_to_save;
	int		length;
	int		index;

	index = 0;
	length = ft_strlen(str_to_reverse);
	while (index < length / 2)
	{
		c_to_save = str_to_reverse[index];
		str_to_reverse[index] = str_to_reverse[length - 1 - index];
		str_to_reverse[length - 1 - index] = c_to_save;
		index++;
	}
}
