# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agorski <agorski@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/09 13:54:47 by agorski           #+#    #+#              #
#    Updated: 2025/04/12 18:30:31 by agorski          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRC = main.cpp Contact.cpp PhoneBook.cpp
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME):
		$(CPP) $(CPPFLAGS) $(SRC) -o $(NAME)

clean:
		rm -f $(NAME)
re: clean all
.phony: all clean re