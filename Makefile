# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: castorga <castorga@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/30 15:08:13 by castorga          #+#    #+#              #
#    Updated: 2023/06/30 15:08:15 by castorga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------------------------------------
NAME = push_swap
LIBFT_DIR = libft/
LIBFT_FILE = $(LIBFT_DIR)libft.a
LIBFT = $(addprefix $(LIBFT_DIR), $(LIBFT_FILE))
SRC_DIR = ./src/
OBJ_DIR = ./obj/

# ----------------- SRCs -----------------------
SRC = $(addprefix $(SRC_DIR), push_swap.c check_argv.c check_ac2.c)

# ----------------- OBJS ----------------------

OBJS = $(addprefix $(OBJ_DIR), $(SRC:.c=.o))

# ----------------- OTHERS -----------------------

DEPS = $(addsuffix .d, $(basename $(OBJS)))
MK = mkdir -p
CFLAGS	= -Wall -Wextra -Werror
INCLUDE = -I ./include/ -I ./libft/include/
RM	= rm -rf
CC	= clang -g

# -------------------- Rules --------------------
$(OBJ_DIR)%.o: %.c Makefile
	@echo "Compiling... $<"
	@$(MK) $(dir $@)
	@$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

subsystems:
	make -C $(LIBFT_DIR) all

all: subsystems $(NAME)

$(NAME): $(OBJS)
	@echo "Building... $@"
	$(CC) $(CFLAGS) $(INCLUDE) $(OBJS) $(LIBFT_FILE) -o $(NAME)

-include $(DEPS)

# -------------------- Clean --------------------
clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJ_DIR)

fclean:	clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re:	fclean $(NAME)

.PHONY:	all clean fclean re subsystems
