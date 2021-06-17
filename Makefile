##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

CC		=	gcc

LD		=	$(CC)

RM		=	rm -f

NAME		=	bsq

NAME_LIBRARY	= 	c_functions

PATH_LIBRARY	=	./lib/$(NAME_LIBRARY)/

PATH_INCLUDE	=	./include/

PATH_SRC	=	./src/

PATH_TESTS	=	./tests/

RWILDCARD	=	$(foreach d,$(wildcard $1*),$(call RWILDCARD,$d/,$2) $(filter $(subst *,%,$2),$d))

INCLUDE		=	-I$(PATH_INCLUDE)

LIBRARY		=	-L$(PATH_LIBRARY) -l$(NAME_LIBRARY)

CFLAGS		+=	$(INCLUDE)

#CFLAGS		+=	-W -Wall -Wextra -Werror -Wpedantic -Wno-long-long -pedantic -g3

LDFLAGS		+=	$(LIBRARY)

SRC		=	$(call RWILDCARD,$(PATH_SRC),*.c)

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	make -C $(PATH_LIBRARY)
	$(LD) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean:
	make clean -C $(PATH_LIBRARY)
	$(RM) $(OBJ)

fclean:
	make fclean -C $(PATH_LIBRARY)
	make clean
	$(RM) $(NAME)

re:	fclean all

unit-tests:
	make -C $(PATH_TESTS)
