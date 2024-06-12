# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/11 02:44:06 by tfiguero          #+#    #+#              #
#    Updated: 2024/06/12 22:06:34 by tfiguero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Abstract

SRC_FILES = main.cpp\
			AMateria.cpp\
			Character.cpp\
			Cure.cpp\
			Ice.cpp\
			MateriaSource.cpp

OBJ_DIR = objs/
OBJ_FILES = $(SRC_FILES:.cpp=.o)
OBJS = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

DEP_FILES = $(SRC_FILES:.cpp=.d)
DEPS = $(addprefix $(OBJ_DIR), $(DEP_FILES))

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror -MMD -fsanitize=address -g
RM = rm -f
INCLUDE = -I ./

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) -o $@

$(OBJ_DIR):
	mkdir -p $@

$(OBJ_DIR)%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJS) $(DEPS)
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re