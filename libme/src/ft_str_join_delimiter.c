/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_join_delimiter.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:18:03 by jwillert          #+#    #+#             */
/*   Updated: 2023/03/08 16:18:05 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_str_join_delimiter(char *str_first, char *str_delimiter,
			char *str_second)
{
	char	*str_temp;
	char	*str_result;

	if (str_first == NULL)
	{
		return (str_second);
	}
	str_temp = ft_strjoin(str_first, str_delimiter);
	if (str_temp == NULL)
	{
		return (NULL);
	}
	str_result = ft_strjoin(str_temp, str_second);
	free(str_temp);
	return (str_result);
}
