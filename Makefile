NAME				=	liballme.a
INCLUDE_DIR			=	./include/
LIBFT_DIR			=	./libft/
LIBFT				=	$(LIBFT_DIR)libft.a
LIBFT_INCLUDE		=	$(LIBFT_DIR)include/
LIBME_DIR			=	./libme/
LIBME				=	$(LIBME_DIR)libme.a
LIBME_INCLUDE		=	$(LIBME_DIR)include/
FT_PRINTF_DIR		=	./ft_printf/
FT_PRINTF			=	$(FT_PRINTF_DIR)libftprintf.a
FT_PRINTF_INCLUDE 	=	$(FT_PRINTF_DIR)include/
GNL_DIR				=	./get_next_line/
GNL					=	$(GNL_DIR)libgnl.a
GNL_INCLUDE			=	$(GNL_DIR)include/
LIB_MERGE			=	ar -crT $(NAME)
REMOVE				=	rm -f
CC					=	cc
CFLAGS				=	-Wall -Wextra -Werror -g
INCLUDE				=	-I $(INCLUDE_DIR) -I $(LIBFT_INCLUDE) -I $(LIBME_INCLUDE) -I $(FT_PRINTF_INCLUDE) -I $(GNL_INCLUDE)
SRC_FILES			=	$(OBJ_FILES:.o=.c)
OBJ_FILES			=	$(shell ar -t $(FT_PRINTF) | grep ft_) $(shell ar -t $(GNL) | grep get)

.DELETE_ON_ERROR:
.PHONY:				all clean fclean re list test libft libft_make libme libme_make ft_printf ft_printf_make gnl gnl_make

all:				$(NAME)
$(NAME):			ft_printf_make gnl_make
					cp $(FT_PRINTF) ./
					cp $(GNL) ./
					ar -x ./libftprintf.a
					ar -x ./libgnl.a
					ar -cr $(NAME) $(OBJ_FILES)
					$(REMOVE) $(OBJ_FILES)
					$(REMOVE) libgnl.a
					$(REMOVE) libftprintf.a
					rm __.SYMDEF\ SORTED
clean:
					$(MAKE) clean -C $(LIBFT_DIR)
					$(MAKE) clean -C $(LIBME_DIR)
					$(MAKE) clean -C $(FT_PRINTF_DIR)
					$(MAKE) clean -C $(GNL_DIR)
fclean:				clean
					$(MAKE) fclean -C $(LIBFT_DIR)
					$(MAKE) fclean -C $(LIBME_DIR)
					$(MAKE) fclean -C $(FT_PRINTF_DIR)
					$(MAKE) fclean -C $(GNL_DIR)
					$(REMOVE) $(NAME) a.out
re:					fclean
					$(MAKE)
list:
					@echo
					@echo
					@echo "Library <$(NAME)> is containing the following functions:"
					@ar -t $(NAME) | sort -g | grep .o
					@echo
					@echo
test:
					$(CC) $(CFLAGS) $(INCLUDE) main.c $(NAME)
libft:				libft_make
					cp $(LIBFT) ./$(NAME)
libft_make:
					$(MAKE) -C $(LIBFT_DIR)
libme:				libme_make
					cp $(LIBME) ./$(NAME)
libme_make:
					$(MAKE) -C $(LIBME_DIR)
ft_printf:			ft_printf_make
					cp $(FT_PRINTF) ./$(NAME)
ft_printf_make:
					$(MAKE) -C $(FT_PRINTF_DIR)
gnl:				gnl_make
					cp $(GNL) ./$(NAME)
gnl_make:
					$(MAKE) -C $(GNL_DIR)
