# Le nom du fichier que tu veux créer
NAME = libft.a

# Tous les fichiers .c de ta lib
SRCS = $(wildcard ft_*.c)

# On transforme les .c en .o (fichiers objets)
OBJS = $(SRCS:.c=.o)

# Le compilateur et les options
CC = cc
CFLAGS = -Wall -Wextra -Werror

# La règle principale
all: $(NAME)

# Comment créer la libft.a
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Nettoyer les .o
clean: 
	rm -f $(OBJS)

# Nettoyer tout
fclean: clean
	rm -f $(NAME)

# Recompiler proprement
re: fclean all
