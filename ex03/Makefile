# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 11:28:34 by barmarti          #+#    #+#              #
#    Updated: 2025/12/30 18:04:00 by barmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(HEADER_DIR)

NAME = ex02

HEADER_DIR = includes
HEADER = $(HEADER_DIR)/AMateria.hpp         \
		 $(HEADER_DIR)/Ice.hpp              \
		 $(HEADER_DIR)/Cure.hpp             \
		 $(HEADER_DIR)/Environment.hpp      \
		 $(HEADER_DIR)/Character.hpp        \
		 $(HEADER_DIR)/ICharacter.hpp       \
		 $(HEADER_DIR)/IMateriaSource.hpp   \
		 $(HEADER_DIR)/MateriaSource.hpp

SRCS_DIR = source
SRCS = $(SRCS_DIR)/AMateria.cpp       \
	   $(SRCS_DIR)/Ice.cpp            \
	   $(SRCS_DIR)/Cure.cpp           \
	   $(SRCS_DIR)/Environment.cpp    \
	   $(SRCS_DIR)/Character.cpp      \
	   $(SRCS_DIR)/MateriaSource.cpp  \
	   $(SRCS_DIR)/main.cpp

SRCS_FILES = $(SRCS)

OBJ_DIR = obj
OBJS = $(SRCS_FILES:. cpp=.o)
OBJS := $(OBJS: $(SRCS_DIR)/%=$(OBJ_DIR)/%)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	@echo "Compilation done"

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HEADER)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re
