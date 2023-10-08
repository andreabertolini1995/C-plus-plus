NAME = megaphone
SOURCES = megaphone.cpp
OBJS = $(SOURCES:.cpp=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -lstdc++

all: $(NAME)	

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)