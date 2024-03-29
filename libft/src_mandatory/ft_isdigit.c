/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:02:21 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:06:22 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c_to_check)
{
	if (c_to_check >= '0' && c_to_check <= '9')
		return (1);
	return (0);
}
