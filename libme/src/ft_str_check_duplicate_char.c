/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_check_duplicate_char.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:49:58 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:34:28 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_str_check_duplicate_char(char *str_to_check, char c_to_check)
{
	size_t	index;
	char	flag;

	index = 0;
	flag = 0;
	if (str_to_check == NULL)
		return (0);
	while (str_to_check[index] != '\0')
	{
		if (str_to_check[index] == c_to_check && flag == 0)
			flag = 1;
		else if (str_to_check[index] == c_to_check && flag == 1)
			return (1);
		index++;
	}
	return (0);
}
