NAME = main
SOURCES = main.cpp
OBJ_DIR = obj
OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)	

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(OBJ_DIR)

re: fclean $(NAME)