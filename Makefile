##
## EPITECH PROJECT, 2019
## makefile
## File description:
## make
##

SRC	=	lib/my/function.c		\
		lib/my/my_getnbr.c		\
		lib/my/my_putnbr.c		\
		lib/my/my_strcat.c		\
		lib/my/my_strcmp.c		\
		lib/my/my_strcpy.c		\
		lib/my/my_strdup.c		\
		lib/my/my_strlen.c		\
		translation.c 			\
		scaling.c 			\
		rotation.c 			\
		reflection.c 			\
		my_architect.c			\
		error_gestion.c			\
		nbr_of_arg.c 			\
		my_architect.c

OBJ	=	$(SRC.c=.o)

NAME	=	libmy.a

EXEC	=	102architect

TEST	=	unit_tests

MAIN	=	my_architect.c

all:	$(EXEC)

$(EXEC):	$(OBJ)
	@gcc -c $(SRC) $(OBJ)
	@gcc -c $(MAIN) $(OBJ)
	@ar rc $(NAME) *.o
	@mv $(NAME) lib/
	@rm -f *.o
	gcc -o $(EXEC) $(MAIN) -L lib/ -lmy include/my.h -g3 -lm

clean:
	@rm -f *.o
	@rm -f *~
	@rm -f a.out
	@rm -f *.gc*
	@rm -f *.a
	@rm -f lib/libmy.a
	@rm -f vg*

fclean:	clean
	rm -f $(EXEC)
	rm -f $(TEST)

re:	fclean all

lib:	$(OBJ)
	@gcc -c $(SRC) $(OBJ)
	@gcc -c $(MAIN) $(OBJ)
	ar rc $(NAME) *.o
	@mv $(NAME) lib/
	@rm -f *.o

tests_run:
	@gcc -o $(TEST) $(MAIN) -L lib/ -lmy tests/project.c --coverage -lcriterion
	@./$(TEST)
	@rm -f *.gc*

ex:
	gcc -o $(EXEC) $(MAIN) -L lib/ -lmy include/my.h -g3

csfml:
	gcc -o $(EXEC) $(MAIN) -L lib/ -lmy include/my.h -l csfml-system -l csfml-window -l csfml-graphics -l csfml-audio -l csfml-network

.PHONIE: tests_run clean fclean re ex csfml lib
