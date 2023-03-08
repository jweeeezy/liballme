# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:41:20 by jwillert          #+#    #+#              #
#    Updated: 2023/02/28 21:11:30 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME			=	libme.a

#	Directories
INCLUDE_DIR		=	./include/
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
LIBFT_DIR		=	../libft/
LIBFT			=	$(LIBFT_DIR)libft_m.a
VPATH			=	$(SRC_DIR):$(OBJ_DIR)

#	Files (42 Norm)
SRC_FILES		=	ft_array_index_init.c\
					ft_array_int_calculate_median.c\
					ft_array_str_free.c\
					ft_atod_long.c\
					ft_atoi_long.c\
					ft_char_to_string.c\
					ft_dummy.c\
					ft_error.c\
					ft_exit_with_error.c\
					ft_input_count_arguments.c\
					ft_input_check_empty_str.c\
					ft_input_count_length.c\
					ft_input_print.c\
					ft_input_str_join.c\
					ft_int_compare_absolute_biggest.c\
					ft_int_compare_absolute_smallest.c\
					ft_itoa_hexadecimal.c\
					ft_itoa_hexadecimal_long.c\
					ft_itoa_unsigned.c\
					ft_lst_add_back.c\
					ft_lst_calculate_average.c\
					ft_lst_calculate_sum.c\
					ft_lst_check_duplicate_int.c\
					ft_lst_count_iterations.c\
					ft_lst_count_nodes.c\
					ft_lst_count_streak_ascending.c\
					ft_lst_delete_node.c\
					ft_lst_fetch_value.c\
					ft_lst_find_int_biggest.c\
					ft_lst_find_int_next_biggest.c\
					ft_lst_find_int_second_smallest.c\
					ft_lst_find_int_smallest.c\
					ft_lst_find_shortest_path.c\
					ft_lst_free.c\
					ft_lst_get_duplicate.c\
					ft_lst_get_index.c\
					ft_lst_get_last.c\
					ft_lst_get_new.c\
					ft_lst_get_value.c\
					ft_lst_header_free.c\
					ft_lst_header_new.c\
					ft_lst_header_print.c\
					ft_lst_print.c\
					ft_lst_print_node.c\
					ft_lst_sort_to_array.c\
					ft_ptr_get_address.c\
					ft_reallocf.c\
					ft_sizet_check_poweroftwo.c\
					ft_str_check_duplicate_char.c\
					ft_str_check_duplicate_set.c\
					ft_str_check_needle.c\
					ft_str_check_set.c\
					ft_str_check_viable_algebraic_signs.c\
					ft_str_check_viable_precursor_digit.c\
					ft_str_check_viable_char.c\
					ft_str_count_needle_occasions.c\
					ft_str_empty.c\
					ft_str_find_char.c\
					ft_str_merge_needle.c\
					ft_str_reverse.c\
					ft_str_duplicate_set.c\
					ft_str_join_delimiter.c\
					ft_vector_str_add_char.c\
					ft_vector_str_fetch_size_allocated.c\
					ft_vector_str_fetch_size_used.c\
					ft_vector_str_fetch_str.c\
					ft_vector_str_free.c\
					ft_vector_str_join.c\
					ft_vector_str_join_delimiter.c\
					ft_vector_str_new.c\
					ft_vector_str_merge.c\
					ft_vector_str_merge_delimiter.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC				=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ				=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))

#	General rules
CC				=	cc
DEBUG			=	$(shell echo $$DEBUG_FLAG)
CFLAGS			=	-Wall -Wextra -Werror $(DEBUG)
INCLUDE			=	-I $(INCLUDE_DIR) -I $(LIBFT_DIR)include/
CC_OBJ			=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f

#	Deletes target in case of an error
.DELETE_ON_ERROR:
%.o:				%.c
					$(CC_OBJ)

#	General targets
.PHONY :			all clean fclean re list
all:				$(NAME)
$(NAME):			$(OBJ_FILES)
					$(MAKE) mandatory -C  $(LIBFT_DIR)
					cp $(LIBFT) $(NAME)
					$(LIB_CREATE) $(OBJ)
clean:
					$(MAKE) clean -C $(LIBFT_DIR)
					$(REMOVE) $(OBJ)
fclean: 			clean
					$(MAKE) fclean -C $(LIBFT_DIR)
					$(REMOVE) $(NAME)
re:					fclean
					$(MAKE)
list:
					@echo
					@echo "Library <$(NAME)> is containing the following functions:"
					@ar -t $(NAME) | grep ft | sort -g
					@echo
