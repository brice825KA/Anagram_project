#/
## EPITECH PROJECT, 2025
## my_octal_nbr
## File description:
## my_octal_nbr
#/

src	=	main.c	\
		strlow.c	\
		error.c	\


obj   =		$(src:.c=.o)

name  =		anagram

cc    =		clang

CFLAGS =	-g -w -Wall -Wextra -Werror  -lm -lc

all: $(name)

$(name):    $(obj)
	$(cc) -o $(name) $(obj) $(CFLAGS)

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(name)

re:
	rm -f $(obj)
	rm -f $(name)
