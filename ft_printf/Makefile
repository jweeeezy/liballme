# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 16:48:58 by jwillert          #+#    #+#              #
#    Updated: 2022/12/14 16:50:58 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Library Name
NAME 			= 	libftprintf.a

#	Directories
INCLUDE_DIR		=	./include/
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
LIBFT_DIR		=	../libft/
LIBME_DIR		=	../libme/
LIBME			=	$(LIBME_DIR)libme.a
VPATH			=	$(SRC_DIR):$(OBJ_DIR):$(INCLUDE_DIR)

#	Files (42 Norm)
SRC_FILES 		= 	ft_printf_utils_nbr.c\
					ft_printf_utils_str.c\
					ft_printf.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC				=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ				=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))

#	General Rules
CC				=	cc
CFLAGS 			= 	-Wall -Wextra -Werror
INCLUDE			=	-I $(INCLUDE_DIR) -I $(LIBME_DIR)/include -I $(LIBFT_DIR)/include
CC_OBJ			=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f

#	Deletes target in case of an error
.DELETE_ON_ERROR:
%.o:				%.c
					$(CC_OBJ)

#	General Targets
.PHONY:				all clean fclean re list

all:				$(NAME)
$(NAME):			$(OBJ_FILES)
					$(MAKE) -C $(LIBME_DIR)
					cp $(LIBME) $(NAME)
					$(LIB_CREATE) $(OBJ)
clean:
					$(MAKE) clean -C $(LIBME_DIR)
					$(REMOVE) $(OBJ)
fclean: 			clean
					$(MAKE) fclean -C $(LIBME_DIR)
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
