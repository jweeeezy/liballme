/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_with_error.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:58:17 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:22:08 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_exit_with_error(char *error_message, int exit_status)
{
	if (write(2, error_message, ft_strlen(error_message)) == -1)
		exit(-1);
	exit(exit_status);
}
