NAME = karenFilter

CLANG =  clang++

CPPFLAGS =  -Wall -Werror -Wextra

RM = rm -f

SRCS = Karen.cpp \
		main.cpp

OBJS = 	$(SRCS:.cpp=.o)

%.o: %.c
		$(CLANG) $(CPPFLAGS) $< -cpp -o $@

all: $(NAME)

$(NAME): $(OBJS)
					$(CLANG) $(CPPFLAGS) $(OBJS) -o $(NAME)
					@chmod 777 $(NAME)
clean:
					@echo "Cleaning up *.o files..."
					$(RM) $(OBJS)

fclean: clean
					@echo "Removing *.a files..."
					$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re