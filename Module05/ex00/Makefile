NAME = bureaucrat

CC =  clang++

CPPFLAGS =  -Wall -Werror -Wextra

RM = rm -f

SRCS = 	Bureaucrat.cpp \
		main.cpp

OBJS = 	$(SRCS:.cpp=.o)

%.o: %.cpp
		$(CC) $(CPPFLAGS) $< -c -o $@

all: $(NAME)

$(NAME): $(OBJS)
					$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
					@chmod 777 $(NAME)
clean:
					@echo "Cleaning up *.o files..."
					$(RM) $(OBJS)

fclean: clean
					@echo "Removing *.a files..."
					$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re