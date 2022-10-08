# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/30 08:51:38 by jwillert          #+#    #+#              #
#    Updated: 2022/09/26 12:18:19 by jwillert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
INCLUDE_DIR		=	./include/
MANDATORY_DIR		=	./src_mandatory/
BONUS_DIR		=	./src_bonus/
OBJ_DIR			=	./obj/
VPATH			=	$(MANDATORY_DIR):$(BONUS_DIR):$(OBJ_DIR):$(INCLUDE_DIR)
MANDATORY_SRC_FILES	=	ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_strlen.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_striteri.c\
				ft_putchar_fd.c\
				ft_putstr_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c
BONUS_SRC_FILES		=	ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c
MANDATORY_OBJ_FILES	=	$(MANDATORY_SRC_FILES:.c=.o)
BONUS_OBJ_FILES		=	$(BONUS_SRC_FILES:.c=.o)
MANDATORY_SRC		=	$(addprefix $(MANDATORY_DIR),$(MANDATORY_SRC_FILES))
BONUS_SRC		=	$(addprefix $(BONUS_DIR),$(BONUS_SRC_FILES))
MANDATORY_OBJ		=	$(addprefix $(OBJ_DIR),$(MANDATORY_OBJ_FILES))
BONUS_OBJ		=	$(addprefix $(OBJ_DIR),$(BONUS_OBJ_FILES))
CC			=	cc
CFLAGS			=	-Wall -Wextra -Werror
INCLUDE			=	-I $(INCLUDE_DIR)
CC_OBJ			=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@ 
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f

.DELETE_ON_ERROR:
.PHONY :			all mandatory bonus list clean fclean re

all:				$(NAME)
$(NAME):			$(MANDATORY_OBJ_FILES) $(BONUS_OBJ_FILES)
				$(LIB_CREATE) $(MANDATORY_OBJ) $(BONUS_OBJ)
%.o:				%.c		
				$(CC_OBJ)
mandatory:			$(MANDATORY_OBJ_FILES)
				$(LIB_CREATE) $(MANDATORY_OBJ)
bonus:				$(BONUS_OBJ_FILES)
				$(LIB_CREATE) $(BONUS_OBJ)
list:				$(NAME)
				@echo
				@echo
				@echo "Library <$(NAME)> is containing the following functions:"
				@ar -t $(NAME) | sort -g
				@echo
				@echo
clean:
				$(REMOVE) $(MANDATORY_OBJ) $(BONUS_OBJ)
fclean: 			clean
				$(REMOVE) $(NAME)
re:				fclean
				$(MAKE)

