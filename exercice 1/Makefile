NAME = exercice

NAMETEST = tests_run

CC	= gcc

RM	= rm -f

MAIN = ./main.c \

MAINOBJ = $(MAIN:.c=.o)

SRCS	=   ./src/error_handling.c \
			./src/my_strcmp.c \

SRCSTEST = 	./tests/tests_return_one.c \

OBJSTEST	= $(SRCSTEST:.c=.o)

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/

CFLAGS += -W -Wall -Wextra -pedantic

all: $(NAME) clean

$(NAME):	$(OBJS) $(MAINOBJ)
		$(CC) $(OBJS) $(MAINOBJ) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJSTEST)
	$(RM) $(MAINOBJ)
	@find -name "*.gcda" -delete
	@find -name "*.gcno" -delete

fclean: clean
	$(RM) $(NAME)
	$(RM) $(NAMETEST)

re: fclean all

tests_run: $(SRCS) $(SRCSTEST) clean
	$(CC) --coverage $(SRCS) -lcriterion -lgcov $(SRCSTEST) -o $(NAMETEST) $(CFLAGS)
	./$(NAMETEST)
	gcovr

.PHONY: all clean fclean re
