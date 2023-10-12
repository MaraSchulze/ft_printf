NAME =	libftprintf.a
FLAGS =	-Wall -Wextra -Werror
SOURCES =	ft_printf.c printer_functions1.c printer_functions2.c helper_functions.c
OBJECTS =	$(SOURCES:.c=.o)
BONUS = $(SOURCES:.c=_bonus.c) bonus_helper_bonus.c
BONUSOBJECTS = $(BONUS:.c=.o)


all : $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o : %.c
	gcc $(FLAGS) -c $<

test : test.c $(SOURCES)
	gcc -Wall -Wextra -Werror -g test.c ft_printf.c printer_functions1.c printer_functions2.c helper_functions.c -o test

bonustest : test.c $(BONUS)
	gcc -Wall -Wextra -g $(BONUS) test.c -o test

testlibrary : $(NAME)
	gcc $(FLAGS) test.c -L. -lftprintf -o librarytest

bonus : $(BONUSOBJECTS)
	ar rc $(NAME) $(BONUSOBJECTS)

clean :
	rm -f $(OBJECTS) $(BONUSOBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

