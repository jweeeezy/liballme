/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libme.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:59:51 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/02 18:48:20 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBME_H
# define LIBME_H
# include "libft.h"
# include <float.h>
# include <limits.h>

//
//
/* ************************************************************************** */
/* 							LINKED LIST RELATED								 */
/* ************************************************************************** */
//
//
/* *****************************  t_lst  *********************************** */
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
/// @brief		Adds a note to the end of a list (with malloc)
/// @param lst_to_add
/// @param node_to_add
void			ft_lst_add_back(t_lst *lst_to_add, t_lst *node_to_add);
//
//
/// @brief		Makes an avereage out of all values of a lst
/// @param lst_to_calculate
/// @return 	Long of average of all values of a list
long			ft_lst_calc_average(t_lst *lst_to_calculate);
//
//
/// @brief		Makes a sum out of all values of a lst
/// @param lst_to_calculate
/// @return 	Long of sum of all values of a list
long			ft_lst_calc_sum(t_lst *lst_to_calculate);
//
//
/// @brief		Checks if there is a duplicate value in a list
/// @param lst_to_check
/// @return 0 (False) or 1 (True)
char			ft_lst_check_duplicate_int(t_lst **lst_to_check);
//
//
/// @brief		Counts the iterations between two "t_lst" pointers
/// @param lst_to_check
/// @return		Size_t of iteration count or 0 if NULL pointer.
size_t			ft_lst_count_iterations(t_lst *lst_start, t_lst *lst_end);
//
//
/// @brief		Counts the size (nodes) of a list
/// @param lst_to_count
/// @return Size of the list (size_t)
size_t			ft_lst_count_nodes(t_lst *lst_to_count);
//
//
/// @brief		Counts a streak of ascending node values
/// @param lst_to_count
/// @return		Streak count or 0 if no streak
size_t			ft_lst_count_streak_ascending(t_lst *lst_to_count);
//
//
/// @brief		Deletes the node of a lst
/// @param lst_head
/// @param node_to_delete
void			ft_lst_delete_node(t_lst **lst_head, t_lst *node_to_delete);
//
//
/// @brief 		Duplicates all values of a list in to a new list
/// @param lst_to_duplicate
/// @return 	Newly allocated lst (with malloc)
t_lst			*ft_lst_get_duplicate(t_lst *lst_to_duplicate);
//
//
/// @brief 		Fetches the node.content of lst_index
/// @param lst_index
/// @return 	int of lst_index.content
int				ft_lst_fetch_value(t_lst *lst_index);
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
/// @brief		Loops through a t_lst and searches for the highest int
/// @param lst_to_search
/// @return	highest found int
int				ft_lst_find_int_biggest(t_lst *lst_to_search);
//
//
/// @brief		Loops through a t_lst and searches for the lowest int
/// @param lst_to_search
/// @return	lowest found int
int				ft_lst_find_int_smallest(t_lst *lst_to_search);
//
//
/// @brief		Loops through a t_lst and searches for the second smallest int
/// @param lst_to_search
/// @return second lowest found int
int				ft_lst_find_int_second_smallest(t_lst *lst_to_search);
//
//
/// @brief		Finds the the next biggest integer value in a list
/// @param lst_to_search
/// @param int_to_compare
/// @return
int				ft_lst_find_int_next_biggest(t_lst *lst_to_search,
					int int_to_compare);
//
//
/// @brief		Loops through a t_lst and frees every node
/// @param lst_to_free
void			ft_lst_free(t_lst *lst_to_free);
//
//
/// @brief		Takes a size_t and loops to that position/index in a list
/// @param lst_to_iterate
/// @param index
/// @return Pointer to the new position/index or NULL. If index > lst_size
///			then lst_index == lst_last
t_lst			*ft_lst_get_index(t_lst *lst_to_iterate, size_t index);
//
//
/// @brief		Loops to the last position/index of a list
/// @param lst_to_iterate
/// @return Pointer to the last index or NULL
t_lst			*ft_lst_get_last(t_lst *lst_to_iterate);
//
//
/// @brief		Creates a node (with malloc) of type t_lst containing an int
///				as value
/// @param value
/// @return Pointer to the new node or NULL
t_lst			*ft_lst_get_new(int value);
//
//
/// @brief		Loops through a t_lst and finds an int value
/// @param lst_to_search
/// @param value
/// @return	Pointer to the node of the value or NULL
t_lst			*ft_lst_get_value(t_lst *lst_to_search, int value);
//
//
/// @brief 		Prints the content of a node
/// @param node_to_print
void			ft_lst_print_node(t_lst *node_to_print);
//
//
/// @brief		Prints the content of every node in a lst
/// @param lst_to_print
void			ft_lst_print(t_lst *lst_to_print);
//
/// @brief		Lists the content of a list into an array.
/// @param lst_to_sort
/// @return		Newly allocated array or NULL
int				*ft_lst_sort_to_array(t_lst **lst_to_sort);
//
//
/* ***************************  t_lst_header  ******************************* */
//
//
//		char			*title;
//		t_lst			*head;
typedef struct s_lst_header
{
	char			*title;
	t_lst			*head;
}					t_lst_header;
/// @brief		Creates a new lst_header (with malloc) with a title
/// @param str_title
/// @return Pointer to the new struct or NULL
t_lst_header	*ft_lst_header_new(char *str_title);
//
//
/// @brief		Frees a lst_header and its containing list
/// @param lst_to_free
void			ft_lst_header_free(t_lst_header *lst_to_free);
//
//
/// @brief		Prints all nodes aswell as the title of a t_lst_header
/// @param lst_to_print
void			ft_lst_header_print(t_lst_header *lst_to_print);
//
//
/* ************************************************************************** */
/* 								STRING RELATED								*/
/* ************************************************************************** */
//
//
/// @brief		Checks if a char is present more than once in a string
/// @param str_to_check
/// @param c_to_check
/// @return
char			ft_str_check_duplicate_char(char *str_to_check,
					char c_to_check);
//
//
/// @brief		Checks if a char from a set is present more than once in
///				a string
/// @param str_to_check
/// @param set_to_check
/// @return		1 (True) or 0 (False)
char			ft_str_check_duplicate_set(char *str_to_check,
					char *set_to_check);
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
char			ft_str_check_precursor_digit(const char *str_to_check,
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
/// @brief		Checks a string for anything other than set of viable chars
/// @param str_to_check
/// @param str_set
/// @return 0 (False) or 1 (True)
char			ft_str_check_viable_char(const char *str_to_check,
					const char *str_set);
//
//
/// @brief		Counts how many occasions of needle_a followed by needle_b or
///				vice versa exist in the haystack
/// @param haystack
/// @param needle_a
/// @param needle_b
/// @return		size_t of occasion count
size_t			ft_str_count_needle_occasions(const char *haystack,
					const char *needle_a, const char *needle_b);
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
/// @brief
/// @param str_haystack
/// @param str_needle_a
/// @param str_needle_b
/// @param str_needle_merge
/// @return
char			*ft_str_merge_needles(char *str_haystack,
					const char *str_needle_a,
					const char *str_needle_b,
					const char *str_needle_merge);
//
//
/// @brief 		Reverses the contents of a string in place
/// @param str_to_reverse
void			ft_str_reverse(char *str_to_reverse);
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
/// @brief 		Initializes an array of array_size of size_t and sets all
///				values to 0
/// @param array_size
/// @return 	The newly allocated array of indexes (with malloc);
size_t			*ft_array_index_init(size_t	array_size);
//
//
/// @brief
/// @param array
/// @param size_array
/// @return
int				ft_array_int_calc_median(int *array, size_t size_array);
//
//
/// @brief 		Frees all strings in an array and the array itself
/// @param array_to_free
void			ft_array_str_free(char **array_to_free);
//
//
/// @brief 		Checks the input if there is an empty string ("")
/// @param input_to_check
/// @return 	1 (True) or 0 (False)
char			ft_input_check_empty_str(char **input_to_check);
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
/// @brief		Converts a string into a float. Uses double as a data type
/// @param str_to_convert
/// @return		Float representation of string
long double			ft_atof_long(char *str_to_convert);
//
//
/// @brief		Converts a string into its int representation. Uses long int
///				as a data type to throw an error if either string is NULL
///				(LONG_MIN) or to prevent an overflow (LONG_MAX)
/// @param str_to_convert
/// @return Long int representation of string
long			ft_atoi_long(char *str_to_convert);

/// @brief 		Converts a char to a string (with malloc)
/// @param c
/// @return Newly allocated string or NULL
char			*ft_char_to_string(char c_to_convert);
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
/*				 					VECTOR									 */
/* ************************************************************************** */
//
//
//	char 	*str;
//	size_t 	size;
//	size_t	buffer;
typedef struct s_vector
{
	char	*str;
	size_t	size_used;
	size_t	size_allocated;
}				t_vector_str;
//
//
t_vector_str	*ft_vector_str_add_char(t_vector_str *vector_to_expand,
					char c_to_add);
/// @brief		Adds another string to the existing string of vector_to_expand.
///				if there is enough space it will use ft_strlcat, else if more
///				space is needed, it will copy the values and reallocate a new
///				vector with enough size. if size_to_add == 0, the required
///				size of the string * 2 will be added
/// @param vector_to_expand
/// @param str_to_add
/// @param size_to_add
/// @return		Pointer to the vector_to_expand or the newly created vector
///				(with malloc)
t_vector_str	*ft_vector_str_join(t_vector_str *vector_to_expand,
					char *str_to_add, size_t size_to_add);
//
//
/// @brief		Allocates a new vector aswell as allocates twice as much size
///				as the length of the str_to_add
/// @param size_of_str
/// @return		Pointer to the newly allocated vector (with malloc)
t_vector_str	*ft_vector_str_new(const char *str_to_add);
//
//
/// @brief		Frees the containing string and the vector itself
/// @param vector_to_free
void			ft_vector_str_free(t_vector_str *vector_to_free);
//
//
/// @brief		Gets the pointer to the allocated string inside the vector
/// @param vector_to_search
/// @return		Pointer to the previously allocated string in the vector
char			*ft_vector_str_fetch_str(t_vector_str *vector_to_search);
//
//
/// @brief		Fetches the size_t of size_used inside the vector
/// @param vector_to_search
/// @return		Size_t of size_used of the vector
size_t			ft_vector_str_fetch_size_used(
					t_vector_str *vector_to_search);
//
//
/// @brief		Fetches the size_t of size_allocated inside the vector
/// @param vector_to_search
/// @return		Size_t of size_allocated inside the vector
size_t			ft_vector_str_fetch_size_allocated(
					t_vector_str *vector_to_search);
//
//
/* ************************************************************************** */
/*				 					OTHER									 */
/* ************************************************************************** */
//
//
/// @brief 		Prints "Error" to stderr
/// @param
void			ft_error(void);
/// @brief 		Exits with a given error message and a given exit status or
///				-1 if the write failed
/// @param error_message
/// @param exit_status
void			ft_exit_with_error(char *error_message, int exit_status);
/// @brief 		Dummy function to use a parameter in one line so the
///				compiler doesnt give a warning
/// @param dummy
void			ft_dummy(void *dummy);
/// @brief		Converts the address of a pointer into a hexadecimal string
///				(with malloc)
/// @param ptr
/// @return Pointer to the newly allocated string or NULL
char			*ft_ptr_get_address(void *ptr);
/// @brief 		Reallocates pointer with size old to a new allocation of size
///				new while copying its values. Frees the old pointer and
///				allocates a new one.
/// @param ptr_to_realloc
/// @param size_old
/// @param size_new
/// @return Pointer to the new allocation or NULL
void			*ft_reallocf(void *ptr_to_realloc, size_t size_old,
					size_t size_new);
/// @brief 		Checks if a number (size t) is a power of two
/// @param n_to_check
/// @return		1 (true) or 0 (false)
char			ft_sizet_check_poweroftwo(size_t n_to_check);

#endif
