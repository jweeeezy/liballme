/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:58:41 by jwillert          #+#    #+#             */
/*   Updated: 2022/05/20 09:29:30 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF__UTILS_STR_H
# define FT_PRINTF_STR_UTILS_H
# include "ft_printf.h"

//	takes char c and (output-)length and prints like 'c'
//	the char to ouput | returns new length
int	ft_ifc(char c, int length);
//	takes char *str and (output-)length and prints like 's'
//	the va_arg to output with ft_putstr
//	prints string or (null) | returns new length
int	ft_ifs(char *str, int length);
//	takes void *ptr and (output-)length and prints like 'p'
//	the address of va_arg in hexadecimal_lowercase
//	uses ft_get_ptr_address | returns new length
int	ft_ifp(void *ptr, int length);
//	takes char '%' and (output-)length and prints like 'c'
//	the char to ouput | returns new length
int	ft_ifperc(int length);

#endif
