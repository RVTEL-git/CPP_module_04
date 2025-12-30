# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: barmarti <barmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/23 11:28:34 by barmarti          #+#    #+#              #
#    Updated: 2025/12/29 15:00:20 by barmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(HEADER_DIR)

NAME = ex02

HEADER_DIR = Includes
HEADER = $(HEADER_DIR)/Animal.hpp      \
		 $(HEADER_DIR)/Dog.hpp         \
		 $(HEADER_DIR)/Cat.hpp         \
		 $(HEADER_DIR)/WrongAnimal.hpp \
		 $(HEADER_DIR)/WrongCat.hpp    \
		 $(HEADER_DIR)/Brain.hpp       \

SRCS_DIR = source
SRCS = $(SRCS_DIR)/main.cpp        \
	   $(SRCS_DIR)/Animal.cpp      \
	   $(SRCS_DIR)/Dog.cpp         \
	   $(SRCS_DIR)/Cat.cpp         \
	   $(SRCS_DIR)/WrongAnimal.cpp \
	   $(SRCS_DIR)/WrongCat.cpp    \
	   $(SRCS_DIR)/Brain.cpp

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
