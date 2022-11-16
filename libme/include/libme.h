/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libme.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:59:51 by jwillert          #+#    #+#             */
/*   Updated: 2022/11/16 13:16:33 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBME_H
# define LIBME_H
# include "libft.h"

//
//
/* ************************************************************************** */
/* 							LINKED LIST RELATED								 */
/* ************************************************************************** */
//
//
//		int				content;
//		struct s_lst	*next;
typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}					t_lst;
//
//
//		char			*title;
//		t_lst			*head;
typedef struct s_lst_header
{
	char			*title;
	t_lst			*head;
}					t_lst_header;
//
//
/// @brief		Adds a note to the end of a list (with malloc)
/// @param lst_to_add
/// @param node_to_add
void			ft_lst_add_back(t_lst *lst_to_add, t_lst *node_to_add);
//
//
/// @brief		Checks if there is a duplicate value in a list
/// @param lst_to_check
/// @return 0 (False) or 1 (True)
char			ft_lst_check_duplicate(t_lst **lst_to_check);
//
//
/// @brief		Counts the iterations between two "t_lst" pointers
/// @param lst_to_check
/// @return		Size_t of iteration count or 0 if NULL pointer.
size_t			ft_lst_count_iterations(t_lst *lst_start, t_lst *lst_end);
//
//
/// @brief		Loops through a t_lst and frees every node
/// @param lst_to_free
void			ft_lst_free(t_lst *lst_to_free);
//
//
/// @brief		Compares the number of iterations it takes from a lst_index
///				to the start or end of the list. For up it takes the first
///				node and calculates iterations until lst_index where as for
///				down it takes lst_index as the first node and calculates
///				the iterations it takes to reach lst_dest_down.
/// @param lst_start
/// @param lst_dest_a
/// @param lst_dest_b
/// @return		a negative int (-1 and smaller ) for up a 0 if an error
///				(or bdu) occured or a positive int (+1 and bigger) if
///				down is the shortest path
int				ft_lst_find_shortest_path(t_lst *lst_index, t_lst *lst_dest_up,
					t_lst *lst_dest_down);
//
//
/// @brief		Loops through a t_lst and finds an int value
/// @param lst_to_search
/// @param value
/// @return	Pointer to the node of the value or NULL
t_lst			*ft_lst_find_value(t_lst *lst_to_search, int value);
//
//
/// @brief		Loops through a t_lst and searches for the highest int
/// @param lst_to_search
/// @return	highest found int
int				ft_lst_get_int_biggest(t_lst *lst_to_search);
//
//
/// @brief		Loops through a t_lst and searches for the lowest int
/// @param lst_to_search
/// @return	lowest found int
int				ft_lst_get_int_smallest(t_lst *lst_to_search);
//
//
/// @brief		Loops through a t_lst and searches for the second smallest int
/// @param lst_to_search
/// @return second lowest found int
int				ft_lst_get_int_second_smallest(t_lst *lst_to_search);
//
//
/// @brief		Creates a new lst_header (with malloc) with a title
/// @param str_title
/// @return Pointer to the new struct or NULL
t_lst_header	*ft_lst_header_new(char *str_title);
//
//
/// @brief		Frees a lst_header and its containing list
/// @param lst_to_free
void			ft_lst_header_free(t_lst_header **lst_to_free);
//
//
/// @brief		Takes a size_t and loops to that position/index in a list
/// @param lst_to_iterate
/// @param index
/// @return Pointer to the new position/index or NULL. If index > lst_size
///			then lst_index == lst_last
t_lst			*ft_lst_index(t_lst *lst_to_iterate, size_t index);
//
//
/// @brief		Loops to the last position/index of a list
/// @param lst_to_iterate
/// @return Pointer to the last index or NULL
t_lst			*ft_lst_last(t_lst *lst_to_iterate);
//
//
/// @brief		Creates a node (with malloc) of type t_lst containing an int
///				as value
/// @param value
/// @return Pointer to the new node or NULL
t_lst			*ft_lst_new(int value);
//
//
/// @brief		Counts the size (nodes) of a list
/// @param lst_to_count
/// @return Size of the list (size_t)
size_t			ft_lst_size(t_lst *lst_to_count);
//
//
/* ************************************************************************** */
/* 								STRING RELATED								*/
/* ************************************************************************** */
//
//
/// @brief		Checks if a string (haystack) contains another string (needle)
/// @param haystack
/// @param needle
/// @param length
/// @return 0 (False) or 1 (True)
char			ft_str_check_needle(const char *haystack, const char *needle,
					size_t length);
//
//
/// @brief		Checks if a specific char (c_to_check) has a specific char
///				(c_precursor) as a precursor and a digit afterwards
///				(used to check for viable algebraic signs in input)
/// @param str_to_check
/// @param c_precursor
/// @param c_to_check
/// @return 0 (False) or 1 (True)
char			ft_str_check_precursor(const char *str_to_check,
					char c_precursor, char c_to_check);
//
//
/// @brief		Checks if at least one char of str_set is found in str_to_check
/// @param str_to_check
/// @param str_set
/// @return 0 (False) or 1 (True)
char			ft_str_check_set(const char *str_to_check, const char *str_set);
//
//
/// @brief		Checks a string for anything other than a char of str_set
/// @param str_to_check
/// @param str_set
/// @return 0 (False) or 1 (True)
char			ft_str_check_viable_char(const char *str_to_check,
					const char *str_set);
//
//
/// @brief 		Creates a string (with malloc) that is emtpy (only '\0')
/// @param
/// @return Pointer to newly allocated string or NULL
char			*ft_str_empty(void);
//
//
/// @brief		 Checks a string for a specific char
/// @param str_to_search
/// @param char_to_find
/// @return 0 (False) or 1 (True)
char			ft_str_find_char(char const *str_to_search,
					char const char_to_find);
//
//
/// @brief 		Reverses the contents of a string in place
/// @param str_to_reverse
void			ft_str_rev(char *str_to_reverse);
//
//
/// @brief 		Duplicates str_to_search but only the chars in str_set_to_find
/// @param str_to_search
/// @param str_set_to_find
/// @return Pointer to the newly allocated string or NULL
char			*ft_strdup_set(char const *str_to_search,
					char const *str_set_to_find);
//
//
/* ************************************************************************** */
/*		 					INPUT / ARGV / ARRAY RELATED					 */
/* ************************************************************************** */
//
//
/// @brief 		Frees all strings in an array and the array itself
/// @param array_to_free
void			ft_array_str_free(char **array_to_free);
//
//
/// @brief 		Puts all strings of one input into one string (with malloc)
/// @param argv
/// @return Pointer to the newly allocated string or NULL
char			*ft_input_strjoin(char **array_to_combine);
//
//
/// @brief 		Counts the length of all chars in an array of strings
/// @param array_to_count
/// @return Size_t of the length
size_t			ft_input_len(char **array_to_count);
//
//
/// @brief 		Prints the content of an array of strings
/// @param array_to_print
void			ft_input_print(char **array_to_print);
//
/// @brief 		Counts the number of strings in an array of strings
/// @param array_to_count
/// @return Size_t of the amount of strings
size_t			ft_input_argc(char **array_to_count);
//
//
/* ************************************************************************** */
/*		 					TYPE CONVERSION									 */
/* ************************************************************************** */
//
//
/// @brief 		Converts an unsigned long int (address of a ptr) into a
///				hexadecimal string (with malloc) either in lowercase (flag 0)
///				or uppercase (flag 1)
/// @param ulint_to_convert
/// @param flag_caps
/// @return Newly allocated string or NULL
char			*ft_itoa_hexadecimal_long(unsigned long int ulint_to_convert,
					int flag_caps);
//
//
/// @brief		Converts an unsigned int into a hexadecimal string
///				(with malloc) either in lowercase (flag 0) or uppercase (flag 1)
/// @param uint_to_convert
/// @param flag_caps
/// @return Newly allocated string or NULL
char			*ft_itoa_hexadecimal(unsigned int uint_to_convert,
					int flag_caps);
//
//
/// @brief 		Converts an unsigned int into a string (with malloc)
/// @param uint_to_convert
/// @return Newly allocated string or NULL
char			*ft_itoa_unsigned(unsigned int uint_to_convert);
//
//
/// @brief		Converts a string into its int representation. Uses long int
///				as a data type to throw an error if either malloc fails
///				(9999999991) or to prevent an overflow (9999999999)
/// @param str_to_convert
/// @return Long int representation of string
long			ft_atoi_long(char *str_to_convert);
//
//
/* ************************************************************************** */
/* 									INT RELATED								 */
/* ************************************************************************** */
//
//
/// @brief 		Compares the absolute conversion of two integer values
///				and tells which value is smaller
/// @param value_a
/// @param value_b
/// @return returns -1 (value_a), 0 (no difference) or +1 (value_b)
char			ft_int_compare_absolute_smallest(int value_a, int value_b);
//
//
/// @brief 		Compares the absolute conversion of two integer values
///				and tells which value is bigger
/// @param value_a
/// @param value_b
/// @return	returns -1 (value_a), 0 (no difference) or +1 (value b)
char			ft_int_compare_absolute_biggest(int value_a, int value_b);
//
//
/* ************************************************************************** */
/*				 					OTHER									 */
/* ************************************************************************** */
//
//
/// @brief		Converts the address of a pointer into a hexadecimal string
///				(with malloc)
/// @param ptr
/// @return Pointer to the newly allocated string or NULL
char			*ft_ptr_get_address(void *ptr);
/// @brief 		NOT WORKING RIGHT YET... !!! DO NOT USE !!!
/// @param ptr_to_realloc
/// @param size_old
/// @param size_new
/// @return or NULL
void			*ft_reallocf(void *ptr_to_realloc, size_t size_old,
					size_t size_new);

#endif
