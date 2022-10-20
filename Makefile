NAME			=	liballme.a
INCLUDE_DIR		=	./include/
LIBFT_DIR		=	./libft/
LIBFT			=	$(LIBFT_DIR)libft.a
LIBFT_INCLUDE		=	$(LIBFT_DIR)include/
LIBME_DIR		=	./libme/
LIBME			=	$(LIBME_DIR)libme.a
LIBME_INCLUDE		=	$(LIBME_DIR)include/
PRINTF_DIR		=	./printf/
PRINTF			=	$(PRINTF_DIR)libftprintf.a
PRINTF_INCLUDE		=	$(PRINTF_DIR)include/
GNL_DIR			=	./get_next_line/
GNL			=	$(GNL_DIR)libgnl.a
GNL_INCLUDE		=	$(GNL_DIR)include/
LIB_MERGE		=	ar -crT $(NAME)
REMOVE			=	rm -f
CC			=	cc
CFLAGS			=	-Wall -Wextra -Werror
INCLUDE			=	-I $(INCLUDE_DIR) -I $(LIBFT_INCLUDE) -I $(LIBME_INCLUDE) -I $(PRINTF_INCLUDE) -I $(GNL_INCLUDE)


.DELETE_ON_ERROR:
.PHONY:				all list test libft libme printf gnl clean fclean re

all:				$(NAME)
$(NAME):		
				$(MAKE) -C $(PRINTF_DIR)
				$(MAKE) -C $(GNL_DIR)
				cp $(PRINTF) ./obj
				cp $(GNL) ./obj
				cd ./obj
				ar x ./obj/libftprintf.a
				rm ./obj/libftprintf.a
				ar x ./obj/libgnl.a
				rm ./obj/libgnl.a
				ar -cr $(NAME) *.o
				rm *.o
list:			
				@echo
				@echo
				@echo "Library <$(NAME)> is containing the following functions:"
				@ar -t $(NAME) | sort -g
				@echo
				@echo
test:			
				$(CC) $(CFLAGS) $(INCLUDE) main.c lst_print_content.c $(NAME)
libft:			
				$(MAKE) -C $(LIBFT_DIR)
				cp $(LIBFT) $(NAME)
libme:
				$(MAKE) -C $(LIBME_DIR)
				cp $(LIBME) $(NAME)
printf:
				$(MAKE) -C $(PRINTF_DIR)
				cp $(PRINTF) $(NAME)
gnl:
				$(MAKE) -C $(GNL_DIR)
				cp $(GNL) $(NAME)
clean:			
				$(MAKE) clean -C $(LIBFT_DIR)
				$(MAKE) clean -C $(LIBME_DIR)
				$(MAKE) clean -C $(PRINTF_DIR)
				$(MAKE) clean -C $(GNL_DIR)
fclean:				clean
				$(MAKE) fclean -C $(LIBFT_DIR)
				$(MAKE) fclean -C $(LIBME_DIR)
				$(MAKE) fclean -C $(PRINTF_DIR)
				$(MAKE) fclean -C $(GNL_DIR)
				$(REMOVE) $(NAME) a.out
re:				fclean
				$(MAKE)

