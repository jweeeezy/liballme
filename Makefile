# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/15 19:08:46 by jwillert          #+#    #+#              #
#    Updated: 2022/12/15 19:47:43 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME									=	liballme.a

#	Directories
INCLUDE_DIR								=	./include/
LIBFT_DIR								=	./libft/
LIBFT									=	$(LIBFT_DIR)libft.a
LIBFT_MANDATORY							=	$(LIBFT_DIR)libft_m.a
LIBFT_BONUS								=	$(LIBFT_DIR)libft_b.a
LIBFT_INCLUDE							=	$(LIBFT_DIR)include/
LIBME_DIR								=	./libme/
LIBME									=	$(LIBME_DIR)libme.a
LIBME_INCLUDE							=	$(LIBME_DIR)include/
FT_PRINTF_DIR							=	./ft_printf/
FT_PRINTF								=	$(FT_PRINTF_DIR)libftprintf.a
FT_PRINTF_INCLUDE 						=	$(FT_PRINTF_DIR)include/
GNL_DIR									=	./get_next_line/
GNL										=	$(GNL_DIR)libgnl.a
GNL_INCLUDE								=	$(GNL_DIR)include/

#	Files
SRC_FILES								=	$(OBJ_FILES:.o=.c)
OBJ_FILES								=	$(shell ar -t $(FT_PRINTF) | grep ft_) $(shell ar -t $(GNL) | grep get)

#	General Rules
REMOVE									=	rm -f
CC										=	cc
CFLAGS									=	-Wall -Wextra -Werror
INCLUDE									=	-I $(INCLUDE_DIR) -I $(LIBFT_INCLUDE) -I $(LIBME_INCLUDE) -I $(FT_PRINTF_INCLUDE) -I $(GNL_INCLUDE)
LIB_CREATE								=	ar -crs
LIB_EXTRACT								=	ar -x

#	Deletes targets in case of an error
.DELETE_ON_ERROR:

#	General targets:
.PHONY:					all clean fclean re list test
all:						$(NAME)
$(NAME):				printf_make gnl_make
							test ! -f liballme.a && $(MAKE) liballme_make || echo "Liballme already exists!"
liballme_make:
							cp $(FT_PRINTF) ./
							cp $(GNL) ./
							$(LIB_EXTRACT) ./libftprintf.a
							$(LIB_EXTRACT) ./libgnl.a
							$(LIB_CREATE) $(NAME) $(OBJ_FILES)
							$(REMOVE) $(OBJ_FILES)
							$(REMOVE) libgnl.a
							$(REMOVE) libftprintf.a
							test ! -f __.SYMDEF\ SORTED || rm __.SYMDEF\ SORTED
clean:
							$(MAKE) clean -C $(LIBFT_DIR)
							$(MAKE) clean -C $(LIBME_DIR)
							$(MAKE) clean -C $(FT_PRINTF_DIR)
							$(MAKE) clean -C $(GNL_DIR)
fclean:					clean
							$(MAKE) fclean -C $(LIBFT_DIR)
							$(MAKE) fclean -C $(LIBME_DIR)
							$(MAKE) fclean -C $(FT_PRINTF_DIR)
							$(MAKE) fclean -C $(GNL_DIR)
							$(REMOVE) $(NAME)
							$(REMOVE) ./libft_m.a
							$(REMOVE) ./libft_b.a
							$(REMOVE) ./libft.a
							$(REMOVE) ./libftprintf.a
							$(REMOVE) ./libgnl.a
							$(REMOVE) ./libme.a
re:						fclean
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

#	Libft
.PHONY:					libft libft_make libft_mandatory libft_mandatory_make libft_bonus libft_bonus_make
libft:					libft_make
							cp $(LIBFT) ./libft.a
libft_make:
							$(MAKE) -C $(LIBFT_DIR)
libft_mandatory:		libft_mandatory_make
							cp $(LIBFT_MANDATORY) ./libft_m.a
libft_mandatory_make:
							$(MAKE) mandatory -C $(LIBFT_DIR)
libft_bonus:			libft_bonus_make
							cp $(LIBFT_DIR)libft_b.a ./libft_b.a
libft_bonus_make:
							$(MAKE) bonus -C $(LIBFT_DIR)

#	Libme
.PHONY:					libme libme_make
libme:					libme_make
							cp $(LIBME) ./libme.a
libme_make:
							$(MAKE) -C $(LIBME_DIR)

#	Ft_printf
.PHONY:					printf printf_make
printf:					printf_make
							cp $(FT_PRINTF) ./libftprintf.a
printf_make:
							$(MAKE) -C $(FT_PRINTF_DIR)

#	Get_next_line
.PHONY:					gnl gnl_make
gnl:					gnl_make
							cp $(GNL) ./libgnl.a
gnl_make:
							$(MAKE) -C $(GNL_DIR)
