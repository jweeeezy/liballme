/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:59:16 by jwillert          #+#    #+#             */
/*   Updated: 2022/12/14 18:07:22 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	*ft_char_to_string(char c_to_convert)
{
	char	*string_return;

	string_return = malloc (sizeof (char) * 2);
	if (string_return == NULL)
		return (NULL);
	string_return[0] = c_to_convert;
	string_return[1] = '\0';
	return (string_return);
}
