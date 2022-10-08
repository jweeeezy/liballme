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

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;
//	Purpose:	Check char if its value is part of the alphabet
//	Argument:	c_to_check
//	Return:		True (1) or false (0)
int	ft_isalpha(int c_to_check);
//	Purpose:	Check char if its value is representing a digit
//	Argument:	c_to_check
//	Return:		True (1) or false (0)
int	ft_isdigit(int c_to_check);
//	Purpose:	Check char if its value is either part of
//			the alphabet or a digit or not
//	Argument:	c_to_check
//	Return:		True (1) or false (0)
int	ft_isalnum(int c_to_check);
//	Purpose:	Check char if its value is part of the ASCII table
//	Argument:	c_to_check
//	Return:		True (1) or false (0)
int	ft_isascii(int c_to_check);
//	Purpose:	Check char if its value is part of the printable char
//			of the ASCII table
//	Argument:	c_to_check
//	Return:		True (1) or false (0)
int	ft_isprint(int c_to_check);
//	Purpose:	Count the length of a str
//	Argument:	str_to_count
//	Return:		Length of the str
size_t	ft_strlen(const char *str_to_count);
//	Purpose:	Set memory amount of bytes pointed to
//			to a specific value
//	Arguments:	ptr to memory address, value to set, amount of bytes
void	*ft_memset(void *ptr, int c_value, size_t bytes);
//	Purpose:	Set memory amount of bytes pointed to
//	to 0
//	Arguments:	ptr to memory address, amount of bytes
void	ft_bzero(void *ptr, size_t bytes);
//	Purpose:	Copy a specific amount of bytes of memory values
//			to another address
//	Arguments:	ptr to destination, ptr to source, amount of bytes
void	*ft_memcpy(void *ptr_dst, const void *ptr_src, size_t bytes);
//	Purpose:	Copy a specific amount of bytes of memory values
//			to another address while handling possible overlapping
//	Arguments:	ptr to destination, ptr to source, amount of bytes
void	*ft_memmove(void *ptr_dst, const void *ptr_src, size_t length);
//	Purpose:	Copy a specific amount of char from a source str
//	to a target str and NULL terminate if there is room
//	Arguments:	ptr to target, ptr to source, amount of chars to copy
//	Return:		Amount of the copied char
size_t	ft_strlcpy(char *str_target, const char *str_source,
			size_t size_needed);
//	Purpose:	Copy a specific amount of char from a source str
//			to the end of target str and NULL terminate if there is room
//	Arguments:	ptr to target, ptr to source, size_needed for both strings
//	Return:		Amount of the copied char
size_t	ft_strlcat(char *str_target, const char *str_source,
			size_t size_needed);
//	Purpose:	Change value of a lowercase char to an uppercase char
//	Argument:	c_to_change
//	Return:		New value of the char
int	ft_toupper(int c_to_change);
//	Purpose:	Change value of an uppercase char to a lowercase char
//	Argument:	c_to_change
//	Return:		New value of the char
int	ft_tolower(int c_to_change);
//	Purpose:	Search for the first occurence of a char in a str
//	Argument:	str_to_seach, c_to_find
//	Return:		ptr to the first occurence or NULL if it fails
char	*ft_strchr(const char *str_to_search, int c_to_find);
//	Purpose:	Search for the last occurence of a char in a str
//	Argument:	str_to_seach, c_to_find
//	Return:		ptr to the last occurence or NULL if it fails
char	*ft_strrchr(const char *str_to_search, int c_to_find);
//	Purpose:	Iterate through two str and compare its values
//			until the first difference is found
//	Argument:	str_first, str_second, amount of bytes
//	Return:		Difference or 0 if there is none
int	ft_strncmp(const char *str_first, const char *str_second, size_t bytes);
//	Purpose:	Search for a char at a memory address for an amount of bytes
//	Argument:	memory address, c_to_find, amount of bytes
//	Return:		ptr to the address if the char is found or NULL if it failed
void	*ft_memchr(const void *ptr_to_search, int c_to_find, size_t bytes);
//	compares byte string s1 and byte string s2 for n bytes
//	|| returns difference if there is any or NULL
int	ft_memcmp(const void *str_first, const void *str_second, size_t bytes);
//	Purpose:	Search for the occurence of a str (needle)
//			in another str (haystack) for a specific amount of char
//	Argument:	str haystack, str needle, amount of char
//	Return:		ptr to the first occurence of needle or NULL if it failed
char	*ft_strnstr(const char *haystack, const char *needle, size_t length);
//	Purpose:	Remove white spaces and algebraic signs in front of a number in
//			a str and convert the number to its int representation
//	Argument:	str
//	Return:		Converted number as an int
int	ft_atoi(const char *str_to_convert);
//	Purpose:	Allocates (with malloc) a specific size (count * bytes)
//			and sets 0 as values
//	Argument:	Count, Amount of bytes
void	*ft_calloc(size_t count, size_t bytes);
//	Purpose:	Duplicate a str (with malloc)
//	Argument:	str_to_copy
//	Return:		ptr to the duplicated str
char	*ft_strdup(const char *str_to_copy);
//	Purpose:	Duplicate a specific amount of char of a str (with malloc)
//	Argument:	str_source, start (index/offset), length
//	Return:		ptr to the duplicated/subtracted str
char	*ft_substr(char const *str_source, unsigned int start, size_t length);
//	Purpose:	Allocate (with malloc) a str with the values of one str plus
//			the attached values of another str
//	Arguments:	str_first, str_second
//	Return:		ptr the newly created str
char	*ft_strjoin(char const *str_first, char const *str_second);
//	Purpose:	Remove any char from a specific set in front of
//			and at the end of a duplicated str (with malloc)
//	Arguments:	str_to_trim, str_delimiter (set of characters to be removed)
//	Return:		ptr to the newly created str
char	*ft_strtrim(char const *str_to_trim, char const *str_delimiter);
//	Purpose:	Split a str into an array of str (with malloc)
//			with the help of a char functioning as a splitting delimiter
//	Arguments:	str_to_split, c_delimiter
//	Return:		ptr to array of (splitted) str
char	**ft_split(char const *str_to_split, char c_delimiter);
//	Purpose:	Convert an int to a str (with malloc)
//	Argument:	int_to_convert
//	Return:		ptr to the newly created str
char	*ft_itoa(int int_to_convert);
//	Purpose:	Apply a function to every character
//			of a duplicated str (with malloc)
//	Arguments:	str_to_map, function to applu
//	Return:		ptr to the newly created string
char	*ft_strmapi(char const *str_to_map, char (*f)(unsigned int, char));
//	Purpose:	Apply a function to every character of a str
//	Arguments:	str_to_iter, function to applu
void	ft_striteri(char *str_to_iter, void (*f)(unsigned int, char *));
//	Purpose:	Print a char to a fd
//	Arguments:	c_to_print, fd
void	ft_putchar_fd(char c_to_print, int fd);
//	Purpose:	Print a str to a fd
//	Arguments:	str_to_print, fd
void	ft_putstr_fd(char *str_to_print, int fd);
//	Purpose:	Print a str to a fd followed by a new line (\n)
//	Arguments:	str_to_print, fd
void	ft_putendl_fd(char *str_to_print, int fd);
//	Purpose:	Print an int to a fd
//	Arguments:	n_to_print
void	ft_putnbr_fd(int int_to_print, int fd);
//	Purpose:	Allocates a new linked lst and adds some
//			data (content) to the first node
//	Arguments:	content
//	Return:		ptr (Head) to newly created node
t_list	*ft_lstnew(void *content);
//	Purpose:	Adds a node to the front of a lst
//	Arguments:	lst, node_to_add
void	ft_lstadd_front(t_list **lst, t_list *node_to_add);
//	Purpose:	Counts the amount of nodes in a lst
//	Argument:	lst
int	ft_lstsize(t_list *lst);
//	Purpose:	Get the address of the last node of a lst
//	Argument:	lst
//	Return:		ptr to last node
t_list	*ft_lstlast(t_list *lst);
//	Purpose:	Adds a node to the back of a lst
//	Arguments:	lst, node_to_add
void	ft_lstadd_back(t_list **lst, t_list *node_to_add);
//	Purpose:	Applies a function to a node of a lst and
//			frees the lst afterwards
//	Arguments:	lst, function to apply
void	ft_lstdelone(t_list *lst, void (*del)(void *));
//	Purpose:	Applies a function to every node of a lst and frees
//			the lst afterwards
void	ft_lstclear(t_list **lst, void (*del)(void *));
//	Purpose:	Applies a function to every node of a lst
//	Arguments:
void	ft_lstiter(t_list *lst, void (*f)(void *));
//	Purpose:	Copies a lst and its contents and applies a function
//			to every node of that lst. If something fails in the
//			process everything is beeing freed
//	Arguments:	lst, function to apply, function to apply on delete
//	Return:		ptr to the duplicated lst
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
