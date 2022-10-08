NAME 		= 	libftprintf.a
INCLUDE_DIR	=	./include/
SRC_DIR		=	./src/
OBJ_DIR		=	./obj/
LIBFT_DIR	=	../libft/
LIBME_DIR	=	../libme/
LIBME		=	$(LIBME_DIR)libme.a
VPATH		=	$(SRC_DIR):$(OBJ_DIR):$(INCLUDE_DIR)
SRC_FILES 	= 	ft_printf_utils_nbr.c\
			ft_printf_utils_str.c\
			ft_printf.c
OBJ_FILES	=	$(SRC_FILES:.c=.o)
SRC		=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ		=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))
CC		=	cc
CFLAGS 		= 	-Wall -Wextra -Werror
INCLUDE		=	-I $(INCLUDE_DIR) -I $(LIBME_DIR)/include -I $(LIBFT_DIR)/include
CC_OBJ		=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE	=	ar -crs $(NAME)
REMOVE		=	rm -f

.DELETE_ON_ERROR:
.PHONY:			all list clean fclean re

all:			$(NAME)
$(NAME):		$(OBJ_FILES)
			$(MAKE) -C $(LIBME_DIR)
			cp $(LIBME) $(NAME)
			$(LIB_CREATE) $(OBJ)
%.o:			%.c
			$(CC_OBJ)
list:			$(NAME)
			@echo
			@echo
			@echo "Library <$(NAME)> is containing the following functions:"
			@ar -t $(NAME) | sort -g
			@echo
			@echo
clean:
			$(MAKE) clean -C $(LIBME_DIR)
			$(REMOVE) $(OBJ)
fclean: 		clean
			$(MAKE) fclean -C $(LIBME_DIR)
			$(REMOVE) $(NAME)
re:			fclean
			$(MAKE)
