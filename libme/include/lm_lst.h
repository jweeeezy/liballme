/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:11:57 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/06 17:09:06 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LST_H
# define LST_H
# include <stdlib.h>	// needed for size_t

/* *****************************  t_lst  *********************************** */
//		int				content;
//		struct s_lst	*next;
typedef struct s_lst
{
	int				content;
	struct s_lst	*next;
}					t_lst;

/* ***************************  t_lst_header  ******************************* */
//		char			*title;
//		t_lst			*head;
typedef struct s_lst_header
{
	char			*title;
	t_lst			*head;
}					t_lst_header;

void			lm_lst_add_back(t_lst *lst_to_add, t_lst *node_to_add);
long			lm_lst_calculate_average(t_lst *lst_to_calculate);
long			lm_lst_calculate_sum(t_lst *lst_to_calculate);
char			lm_lst_check_int_duplicate(t_lst **lst_to_check);
size_t			lm_lst_count_iterations(t_lst *lst_start, t_lst *lst_end);
size_t			lm_lst_count_nodes(t_lst *lst_to_count);
size_t			lm_lst_count_streak_ascending(t_lst *lst_to_count);
void			lm_lst_delete_node(t_lst **lst_head, t_lst *node_to_delete);
int				lm_lst_fetch_value(t_lst *lst_index);
int				lm_lst_find_int_biggest(t_lst *lst_to_search);
int				lm_lst_find_int_next_biggest(t_lst *lst_to_search,
					int int_to_compare);
int				lm_lst_find_int_second_smallest(t_lst *lst_to_search);
int				lm_lst_find_int_smallest(t_lst *lst_to_search);
int				lm_lst_find_shortest_path(t_lst *lst_index, t_lst *lst_dest_up,
					t_lst *lst_dest_down);
void			lm_lst_free(t_lst *lst_to_free);
t_lst			*lm_lst_get_by_index(t_lst *lst_to_iterate, size_t index);
t_lst			*lm_lst_get_by_value(t_lst *lst_to_search, int value);
t_lst			*lm_lst_get_duplicate(t_lst *lst_to_duplicate);
t_lst			*lm_lst_get_last(t_lst *lst_to_iterate);
t_lst			*lm_lst_get_new(int value);
void			lm_lst_header_free(t_lst_header *lst_to_free);
t_lst_header	*lm_lst_header_new(char *str_title);
void			lm_lst_header_print_fd(t_lst_header *lst_to_print,
					int fd_target);
void			lm_lst_print_node_fd(t_lst *node_to_print, int fd_target);
void			lm_lst_print_fd(t_lst *lst_to_print, int fd_target);
int				*lm_lst_sort_to_array(t_lst **lst_to_sort);

#endif	// LST_H