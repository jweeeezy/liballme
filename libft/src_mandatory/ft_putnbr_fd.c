/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 15:13:01 by jwillert          #+#    #+#             */
/*   Updated: 2022/08/03 15:18:48 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_print_nbr(int int_to_print, int fd, int digits)
{
	int		digit_to_print;
	size_t	digit_factor;

	digit_factor = 1;
	digit_to_print = int_to_print;
	while (digits > 1 && digit_factor < 10000000000)
	{
		digit_to_print = int_to_print;
		while ((size_t) digit_to_print < -10 * digit_factor)
			digit_to_print = digit_to_print / 10;
		if (digit_to_print == -10
			&& (size_t) digit_to_print < -1 * digit_factor)
			ft_putchar_fd('1', fd);
		else if (digit_to_print)
		{
			digit_to_print = digit_to_print % 10;
			ft_putchar_fd(('0' + digit_to_print * -1), fd);
		}
		digits--;
		digit_factor = digit_factor * 10;
	}
}

static int	ft_get_digits(int int_to_count)
{
	int	digits;

	digits = 1;
	while (int_to_count < 0)
	{
		int_to_count = int_to_count / 10;
		digits++;
	}
	return (digits);
}

void	ft_putnbr_fd(int int_to_print, int fd)
{
	if (int_to_print > 0)
		int_to_print = int_to_print * -1;
	else if (int_to_print < 0)
		ft_putchar_fd('-', fd);
	else if (int_to_print == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	ft_print_nbr(int_to_print, fd, ft_get_digits(int_to_print));
}
