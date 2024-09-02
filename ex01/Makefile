# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nazouz <nazouz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/31 20:01:03 by nazouz            #+#    #+#              #
#    Updated: 2024/09/01 11:17:42 by nazouz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=			Iter

CPP				=			c++

CPPFLAGS		=			-Wall -Wextra -Werror

INCLUDES		=			iter.hpp

SRCS			=			main.cpp

OBJS			=			$(SRCS:.cpp=.o)

all : $(NAME)

%.o : %.cpp $(INCLUDES)
	$(CPP) -c $(CPPFLAGS) $< -o $@

$(NAME) : $(OBJS)
	$(CPP) $(OBJS) -o $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all