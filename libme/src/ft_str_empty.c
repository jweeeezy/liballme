/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_empty.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:49:29 by jwillert          #+#    #+#             */
/*   Updated: 2022/10/24 15:49:34 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libme.h"

char	*ft_str_empty(void)
{
	char	*str_return;

	str_return = malloc (sizeof (char) * 1);
	if (str_return == NULL)
		return (NULL);
	str_return[0] = '\0';
	return (str_return);
}
