NAME = push_swap

LIBFT_DIR = libft/
LIBFT_FILE = libft.a
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_FILE))

SRCS_DIR = src/
SRC_FILES =	 push_swap.c check_argv.c stack_utils.c pivot.c swap_ab.c \
			push_pb.c

OBJS_DIR =	objs/
OBJ_FILES = $(SRC_FILES:.c=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJ_FILES))
DEPS        := $(OBJS:.o=.d)
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rc
INCLUDE  = -I include/ -I libft/

all: 		$(NAME)

subsystems:
			@make -C $(LIBFT_DIR)

$(NAME):	subsystems $(OBJS_DIR) $(OBJS)
			@$(CC) $(CFLAGS) $(OBJS) -L libft/ -lft -o $@

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