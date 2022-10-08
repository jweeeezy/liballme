/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:59:51 by jwillert          #+#    #+#             */
/*   Updated: 2022/09/26 17:02:26 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBME_H
# define LIBME_H
# include "libft.h"

//	Purpose:	Puts all strings in an array into one string separated by a blank space (with malloc)
//	Argument:	array with strings
//	Return:		String containing all array strings
char	*ft_array_strjoin(char **argv);
//	Purpose:	Converts an unsigned long int (e.g. address of a ptr) into a hexadecimal str (with malloc) either in lowercase (flag_caps = 0) or uppercase (flag_caps = 1)
//	Argument:	ulint_to_convert (can be casted), flag_caps
//	Return:		Newly allocated str version of the ulint in hexadecimal
char	*ft_itoa_hexadecimal_long(unsigned long int ulint_to_convert, int flag_caps);
//	Purpose:	Converts an unsigned int into a hexadecimal str (with malloc) either in lowercase (flag_caps = 0) or uppercase (flag_caps = 1)
//	Argument:	uint_to_convert (can be casted), flag_caps
//	Return:		Newly allocated str version of the uint in hexadecimal
char	*ft_itoa_hexadecimal(unsigned int uint_to_convert, int flag_caps);
//	Purpose:	Converts an unsigned int into a string (with malloc)
//	Argument:	uint_to_convert
//	Return:		Newly allocated str version of the uint
char	*ft_itoa_unsigned(unsigned int uint_to_convert);
//	Purpose:	Converts the value of the address of a ptr into a lowercase hexadecimal format and returns a str (with malloc)
//	Argument:	ptr
//	Return:		Newly allocated str in lowercase hexadecimal format
char	*ft_ptr_get_address(void *ptr);
//	Purpose:	Allocates a str (with malloc) containing only a NULL char
//	Return:		Newly allocated str
char	*ft_str_empty(void);
//	Purpose:	Searches for a char in a str and returns either a 1 (True) if the char is found or a 0 (False) if the char is not found
//	Argument:	str_to_search, char_to_find
//	Return:		1 or 0 in char value
char	ft_str_find_char(char const *str_to_search, char const char_to_find);
//	Purpose:	Searches for a set of char in a str and duplicates only those in a newly allocated str (with malloc) in the order of iterating through the str
//	Argument:	str_to_search, str_set_to_find
//	Return:		Newly allocated str containing all char found that are also in the set
char	*ft_strdup_set(char const *str_to_search, char const *str_set_to_find);
//	Purpose:	Reverses a str in place (no malloc used)
//	Argument:	str_to_reverse
void	ft_strrev(char *str_to_reverse);

#endif

