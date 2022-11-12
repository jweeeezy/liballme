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
					ft_realloc.c\
					ft_str_check_set.c\
					ft_str_check_precursor.c\
					ft_str_check_needle.c\
					ft_str_check_viable_char.c\
					ft_lst_size.c\
					ft_lst_index.c\
					ft_lst_last.c\
					ft_lst_add_back.c\
					ft_lst_new.c\
					ft_lst_header_new.c\
					ft_lst_header_free.c\
					ft_lst_check_duplicate.c\
					ft_input_argc.c\
					ft_array_str_free.c
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
