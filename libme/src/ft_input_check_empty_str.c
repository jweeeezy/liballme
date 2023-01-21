/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check_empty_str.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:13:46 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:23:38 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_input_check_empty_str(char **input_to_check)
{
	size_t	index;

	index = 0;
	while (input_to_check[index] != NULL)
	{
		if (ft_strncmp("", input_to_check[index], 2) == 0)
			return (1);
		index++;
	}
	return (0);
}
