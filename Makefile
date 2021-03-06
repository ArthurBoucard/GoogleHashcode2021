##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.cpp)

NAME	=	hashcode

OBJ	=	$(SRC:.c=.o)

CC	=	g++
LFLAGS	=	-L./lib -lmy
MFLAGS	=	-C./lib/my
CFLAGS	=	-I./include
WFLAGS  =	-Wall\
			-Wextra\
			-Werror\

TSRC	=	$(wildcard tests/*.cpp)
TNAME	=	unit_tests
TFLAGS	=	-lcriterion\
			--coverage\

all:	$(NAME)

END		+=	\e[0m"
CBLUE	+=	"\e[1;34m
CCYAN	+=	"\e[1;36m
CGREEN	+=	"\e[1;32m
CYELLOW	+=	"\e[0;33m
CRED	+=	"\e[0;31m

$(NAME):	$(OBJ)
	@echo $(CGREEN)======[BUILDING PROJECT]=====$(END)
	@echo $(CYELLOW)$(CC) -o $(NAME) $(OBJ) -ggdb3$(END)
	@$(CC) -o $(NAME) $(OBJ) -ggdb3
	@echo $(CGREEN)======[COMPLETE PROJECT]=====$(END)
	@rm -f *.o

test_run:
	@echo $(CGREEN)$(CC) -o $(TNAME) $(SRC) $(TSRC) $(TFLAGS)$(END)
	@./$(TNAME)

clean:
	@echo $(CRED)======[CLEANING]=====$(END)
	rm -f $(NAME)
	rm -f *.o
	rm -f vgcore.*
	rm -f *.gcda
	rm -f *.gcno
	rm -f$(TNAME)
	@echo $(CRED)======[CLEANED]=====$(END)

fclean:	clean

re:	fclean all ##test_run


%.o: %.c
	@gcc -o $@ -c $< $(CFLAGS)
