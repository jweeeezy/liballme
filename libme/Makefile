NAME			=	libme.a
INCLUDE_DIR		=	./include/
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
LIBFT_DIR		=	../libft/
LIBFT			=	$(LIBFT_DIR)libft.a
VPATH			=	$(SRC_DIR):$(OBJ_DIR):$(INCLUDE_DIR)
SRC_FILES		=	ft_input_strjoin.c\
					ft_itoa_hexadecimal.c\
					ft_itoa_hexadecimal_long.c\
					ft_itoa_unsigned.c\
					ft_ptr_get_address.c\
					ft_str_empty.c\
					ft_str_find_char.c\
					ft_strdup_set.c\
					ft_str_rev.c\
					ft_input_len.c\
					ft_input_print.c\
					ft_lst_free.c\
					ft_atoi_long.c\
					ft_reallocf.c\
					ft_str_check_set.c\
					ft_str_check_precursor_digit.c\
					ft_str_check_needle.c\
					ft_str_check_viable_char.c\
					ft_lst_count_nodes.c\
					ft_lst_get_index.c\
					ft_lst_get_last.c\
					ft_lst_add_back.c\
					ft_lst_get_new.c\
					ft_lst_header_new.c\
					ft_lst_header_free.c\
					ft_lst_check_duplicate_int.c\
					ft_input_argc.c\
					ft_array_str_free.c\
					ft_lst_find_int_smallest.c\
					ft_lst_find_int_biggest.c\
					ft_lst_find_int_second_smallest.c\
					ft_lst_get_value.c\
					ft_lst_count_iterations.c\
					ft_lst_find_shortest_path.c\
					ft_int_compare_absolute_biggest.c\
					ft_int_compare_absolute_smallest.c\
					ft_vector_str_join.c\
					ft_vector_str_new.c\
					ft_vector_str_free.c\
					ft_vector_str_fetch_str.c\
					ft_vector_str_fetch_size_used.c\
					ft_vector_str_fetch_size_allocated.c\
					ft_lst_fetch_value.c\
					ft_error.c\
					ft_input_check_empty_str.c\
					ft_array_index_init.c\
					ft_str_count_needle_occasions.c\
					ft_str_merge_needle.c\
					ft_lst_get_duplicate.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC				=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ				=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))
CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror -g
INCLUDE			=	-I $(INCLUDE_DIR) -I $(LIBFT_DIR)/include/
CC_OBJ			=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f

.DELETE_ON_ERROR:
.PHONY :			all clean fclean re list

all:				$(NAME)
$(NAME):			$(OBJ_FILES)
					$(MAKE) -C $(LIBFT_DIR)
					cp $(LIBFT) $(NAME)
					$(LIB_CREATE) $(OBJ)
%.o:				%.c
					$(CC_OBJ)
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
					@echo
					@echo "Library <$(NAME)> is containing the following functions:"
					@ar -t $(NAME) | sort -g
					@echo
					@echo
