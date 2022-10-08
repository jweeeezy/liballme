/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:49:39 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 16:04:45 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c_to_change)
{
	if (c_to_change >= 'A' && c_to_change <= 'Z')
		c_to_change = c_to_change + 32;
	return (c_to_change);
}
