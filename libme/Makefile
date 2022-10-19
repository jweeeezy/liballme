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
				ft_strrev.c\
				ft_input_len.c\
				ft_input_print.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC			=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ			=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))
CC			=	cc
CFLAGS			=	-Wall -Wextra -Werror
INCLUDE			=	-I $(INCLUDE_DIR) -I $(LIBFT_DIR)/include/
CC_OBJ			=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@ 
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f

.DELETE_ON_ERROR:
.PHONY :			all list clean fclean re

all:				$(NAME)
$(NAME):			$(OBJ_FILES)
				$(MAKE) -C $(LIBFT_DIR)
				cp $(LIBFT) $(NAME)
				$(LIB_CREATE) $(OBJ)
%.o:				%.c		
				$(CC_OBJ)
list:				$(NAME)
				@echo
				@echo
				@echo "Library <$(NAME)> is containing the following functions:"
				@ar -t $(NAME) | sort -g
				@echo
				@echo
clean:
				$(MAKE) clean -C $(LIBFT_DIR)
				$(REMOVE) $(OBJ)
fclean: 			clean
				$(MAKE) fclean -C $(LIBFT_DIR)
				$(REMOVE) $(NAME)
re:				fclean
				$(MAKE)

