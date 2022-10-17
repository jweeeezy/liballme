NAME		=	liballme.a
INCLUDE_DIR	=	./include/
LIBFT_DIR	=	./libft/
LIBFT		=	$(LIBFT_DIR)libft.a
LIBME_DIR	=	./libme/
LIBME		=	$(LIBME_DIR)libme.a
PRINTF_DIR	=	./printf/
PRINTF		=	$(PRINTF_DIR)libftprintf.a
GNL_DIR		=	./get_next_line/
GNL		=	$(GNL_DIR)libgnl.a
VPATH		=	$(INCLUDE_DIR)
LIB_MERGE	=	ar -crsT $(NAME)
REMOVE		=	rm -f

.DELETE_ON_ERROR:
.PHONY:			all list libft libme printf gnl clean fclean re

all:			$(NAME)
$(NAME):		
			$(MAKE) -C $(PRINTF_DIR)
			$(MAKE) -C $(GNL_DIR)
			$(LIB_MERGE) $(GNL) $(PRINTF)
list:			
			@echo
			@echo
			@echo "Library <$(NAME)> is containing the following functions:"
			@ar -t $(NAME) | sort -g
			@echo
			@echo
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
fclean:			clean
			$(MAKE) fclean -C $(LIBFT_DIR)
			$(MAKE) fclean -C $(LIBME_DIR)
			$(MAKE) fclean -C $(PRINTF_DIR)
			$(MAKE) fclean -C $(GNL_DIR)
			$(REMOVE) $(NAME)
re:			fclean
			$(MAKE)
