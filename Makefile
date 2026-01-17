# **************************************************************************** #
#                                   LIBFT                                      #
# **************************************************************************** #

NAME        = libft.a

SRC         = $(wildcard *.c)

OBJ         = $(SRC:.c=.o)

CC          = gcc
CFLAGS      = -Wall -Wextra -Werror

RM          = rm -f

# ************************************************************************** #
#                                   RULES                                    #
# ************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re