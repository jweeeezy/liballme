/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_nbr.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:58:38 by jwillert          #+#    #+#             */
/*   Updated: 2023/03/01 12:45:21 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_NBR_H
# define FT_PRINTF_UTILS_NBR_H
# include "libme.h"

//	takes int n and (output-)length and converts like 'd' & 'i'
//	the va_arg into its string representation with ft_itoa
//	prints string or (null) | returns new length
t_vector_str	*ft_ifdi(int number, t_vector_str *vector);
//	takes unsigned nu and (output-)length and converts like 'u'
//	the va_arg into its string representation with ft_itoa_unsigned
//	prints string or (null) | returns new length
t_vector_str	*ft_ifu(unsigned int number, t_vector_str *vector);
//	takes unsigned nu and (output-)length and converts specifiers like 'x'
//	the va_arg into its (hexadecimal_lower) string representation with
//	ft_itoa_hexadecimal	| prints string or (null) | returns new length
t_vector_str	*ft_ifxlower(unsigned int number, t_vector_str *vector);
//	takes unsigned nu and (output-)length and converts specifiers like 'x'
//	the va_arg into its (hexadecimal_upper) string representation with
//	ft_itoa_hexadecimal	| prints string or (null) | returns new length
t_vector_str	*ft_ifxupper(unsigned int number, t_vector_str *vector);

#endif	//	FT_PRINTF_UTILS_NBR_H
