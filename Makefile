NAME = push_swap

LIBFT_DIR = libft/
LIBFT_FILE = libft.a
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_FILE))

SRCS_DIR = src/
SRC_FILES =	 main.c push_swap.c check_argv.c stack_utils1.c \
			stack_utils2.c pivot1.c pivot2.c pivot3.c pivot4.c \
			movements1.c movements2.c movements3.c movements4.c

OBJS_DIR =	objs/
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJ_FILES))
DEPS        := $(OBJS:.o=.d)
CC = clang
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rc
INCLUDE  = -I include/ -I libft/

all: 		$(NAME)

subsystems:
			@make -C $(LIBFT_DIR)

$(NAME):	subsystems $(OBJS_DIR) $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -L libft/ -lft -o $@ -g

$(OBJS_DIR):
			@mkdir $@

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.c
				$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

clean: 		
			make -C $(LIBFT_DIR) clean
			@$(RM) $(OBJS) $(DEPS)


fclean: 	clean
			make -C $(LIBFT_DIR) fclean
			@$(RM) $(NAME)

re:			fclean all
-include $(DEPS)			

.PHONY: all clean fclean re subsystems
