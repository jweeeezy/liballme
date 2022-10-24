/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_strjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:45 by jwillert          #+#    #+#             */
/*   Updated: 2022/10/24 15:48:49 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	*ft_input_strjoin(char **argv)
{
	size_t	index;
	char	*str_return;

	if (argv == NULL)
		return (NULL);
	index = 0;
	str_return = ft_str_empty();
	if (str_return == NULL)
		return (NULL);
	while (argv[index] != NULL)
	{
		str_return = ft_strjoin(str_return, argv[index]);
		str_return = ft_strjoin(str_return, " ");
		index++;
	}
	return (str_return);
}
