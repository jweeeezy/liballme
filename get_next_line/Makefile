NAME			=	libgnl.a
INCLUDE_DIR		=	./include/
SRC_DIR			=	./src/
OBJ_DIR			=	./obj/
VPATH			=	$(SRC_DIR):$(OBJ_DIR):$(INCLUDE_DIR)
SRC_FILES		=	get_next_line_bonus.c\
					get_next_line_utils_bonus.c
OBJ_FILES		=	$(SRC_FILES:.c=.o)
SRC				=	$(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ				=	$(addprefix $(OBJ_DIR),$(OBJ_FILES))
CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror
INCLUDE			=	-I $(INCLUDE_DIR)
CC_OBJ			=	$(CC) $(INCLUDE) $(CFLAGS) -c $^ -o $(OBJ_DIR)$@
LIB_CREATE		=	ar -crs $(NAME)
REMOVE			=	rm -f
BUFFER_SIZE		=	10000

.DELETE_ON_ERROR:
.PHONY:				all list clean fclean re

all:				$(NAME)
$(NAME):			$(OBJ_FILES)
					$(LIB_CREATE) $(OBJ)
%.o:				%.c
					$(CC_OBJ) -D BUFFER_SIZE=$(BUFFER_SIZE)
list:
					@echo
					@echo
					@echo "Library <$(NAME)> is containing the following functions:"
					@ar -t $(NAME) | sort -g
					@echo
					@echo
clean:
					$(REMOVE) $(OBJ)
fclean:				clean
					$(REMOVE) $(NAME)
re:					fclean
					$(MAKE)
