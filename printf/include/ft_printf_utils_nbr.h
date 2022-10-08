/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:58:38 by jwillert          #+#    #+#             */
/*   Updated: 2022/05/20 09:29:33 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_NBR_H
# define FT_PRINTF_UTILS_NBR_H
# include "ft_printf.h"

//	takes int n and (output-)length and converts like 'd' & 'i'
//	the va_arg into its string representation with ft_itoa
//	prints string or (null) | returns new length
int	ft_ifdi(int n, int length);
//	takes unsigned nu and (output-)length and converts like 'u'
//	the va_arg into its string representation with ft_itoa_unsigned
//	prints string or (null) | returns new length
int	ft_ifu(unsigned int nu, int length);
//	takes unsigned nu and (output-)length and converts specifiers like 'x'
//	the va_arg into its (hexadecimal_lower) string representation with
//	ft_itoa_hexadecimal	| prints string or (null) | returns new length
int	ft_ifxlower(unsigned int nu, int length);
//	takes unsigned nu and (output-)length and converts specifiers like 'x'
//	the va_arg into its (hexadecimal_upper) string representation with
//	ft_itoa_hexadecimal	| prints string or (null) | returns new length
int	ft_ifxupper(unsigned int nu, int length);

#endif
