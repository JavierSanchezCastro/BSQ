##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

CC		=	gcc

LIB		= 	ar rc

RM		=	rm -f

NAME		=	libc_functions.a

INCLUDE		=	-I

PATH_SRC	=	./src/

PATH_INCLUDE	= 	./include/

rwildcard	=	$(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))

LIB_FUNCTIONS	=	$(call rwildcard,$(PATH_SRC),*.c)

CFLAGS		+=	$(INCLUDE)$(PATH_INCLUDE)

#CFLAGS		+=	-W -Wall -Wextra -Werror -Wpedantic -Wno-long-long -pedantic -g3

SRC		=	$(LIB_FUNCTIONS)

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	cat msg/building_library
	$(LIB)  $(NAME) $(OBJ)
	cat msg/library_created

clean:
	cat msg/clean
	$(RM) $(OBJ)

fclean:	clean
	cat msg/fclean
	$(RM) $(NAME)

re:	fclean all
