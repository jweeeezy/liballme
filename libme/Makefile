# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:41:20 by jwillert          #+#    #+#              #
#    Updated: 2023/05/03 20:51:06 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME			=	libme.a

#	Directories
INCLUDE_DIR		=	./
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
LIBFT_DIR		=	../libft/
LIBFT			=	$(LIBFT_DIR)libft_m.a
VPATH			=	$(SRC_DIR):$(OBJ_DIR)

#	Files (42 Norm)

_SRC_ARRAY_STR	=	lm_array_str_count_length.c\
					lm_array_str_free.c\
					lm_array_str_print_fd.c\
					lm_str_array_count_arguments.c

_SRC_CONVERT	=	lm_convert_a_to_ld.c\
					lm_convert_a_to_li.c\
					lm_convert_array_str_to_a.c\
					lm_convert_c_to_a.c\
					lm_convert_i_to_a_hex.c\
					lm_convert_p_to_a.c\
					lm_convert_ui_to_a.c\
					lm_convert_uli_to_a_hex.c\
					lm_convert_uli_to_a.c

_SRC_INT		=	lm_int_compare_absolute_biggest.c\
					lm_int_compare_absolute_smallest.c

_SRC_LST		=	lm_lst_add_back.c\
					lm_lst_calculate_average.c\
					lm_lst_calculate_sum.c\
					lm_lst_check_int_duplicate.c\
					lm_lst_count_iterations.c\
					lm_lst_count_nodes.c\
					lm_lst_count_streak_ascending.c\
					lm_lst_delete_node.c\
					lm_lst_fetch_value.c\
					lm_lst_find_int_biggest.c\
					lm_lst_find_int_next_biggest.c\
					lm_lst_find_int_second_smallest.c\
					lm_lst_find_int_smallest.c\
					lm_lst_find_shortest_path.c\
					lm_lst_free.c\
					lm_lst_get_by_index.c\
					lm_lst_get_by_value.c\
					lm_lst_get_duplicate.c\
					lm_lst_get_last.c\
					lm_lst_get_new.c\
					lm_lst_header_free.c\
					lm_lst_header_new.c\
					lm_lst_header_print.c\
					lm_lst_print_node.c\
					lm_lst_print.c\
					lm_lst_sort_to_array.c

_SRC_STRING		=	lm_str_check_char_duplicate.c\
					lm_str_check_char.c\
					lm_str_check_needle.c\
					lm_str_check_set_duplicate.c\
					lm_str_check_set.c\
					lm_str_check_viable_algebraic_signs.c\
					lm_str_check_viable_set.c\
					lm_str_count_needle_appended.c\
					lm_str_duplicate_set.c\
					lm_str_get_empty.c\
					lm_str_join_delimiter.c\
					lm_str_merge_needles.c\
					lm_str_reverse.c

_SRC_UTILS		=	lm_utils_dummy.c\
					lm_utils_exit_with_error.c

_SRC_VEC_STR	=	lm_vec_str_add_char.c\
					lm_vec_str_free.c\
					lm_vec_str_join_delimiter.c\
					lm_vec_str_join.c\
					lm_vec_str_merge_delimiter.c\
					lm_vec_str_merge.c\
					lm_vec_str_new.c

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
.PHONY :			all clean fclean re list test
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
						@echo "Library <$(NAME)> is containing the following \
						functions:"
						@ar -t $(NAME) | grep ft | sort -g
						@echo
test:				$(NAME)
						$(CC) $(CFLAGS) $(INCLUDE) main.c $(NAME)

