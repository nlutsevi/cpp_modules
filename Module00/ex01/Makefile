NAME = crappyPhoneBook

CC =  clang++

CPPFLAGS =  -Wall -Werror -Wextra

RM = rm -f

SRCS = 	main.cpp \
		crappyPhoneBook.cpp

OBJS = 	$(SRCS:.cpp=.o)

%.o: %.c
		$(CC) $(CPPFLAGS) $< -cpp -o $@

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