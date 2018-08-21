# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xeno <xeno@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 13:06:01 by xrhoda            #+#    #+#              #
#    Updated: 2018/08/21 16:03:40 by xeno             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rtv1

FILES = 	main.c \

# VECT_FILES1 = vector_add.c vector_delete.c vector_free.c \
# 				vector_get.c vector_init.c vector_resize.c \
# 				vector_set.c vector_total.c
# VECT_FILES2 = $(patsubst %, ./vector/%, $(VECT_FILES1))

FILES1	= $(FILES)
SRC_DIR = ./srcs
SRCS	= $(addprefix %, $(SRC_DIR)%, $(FILES));
OBJ2	= $($(SRCS):%.c=./obj/%.o)
O_SWAP	= $(patsubst %, ./vector/%, $(OBJ))

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g

MLX_INC	= -I /usr/X11/include -g
#MLX_LNK	= -L /usr/X11/lib -l mlx -framework OpenGL -framework AppKit
MLX_LNK = -Wl,--no-as-needed -I /usr/local/include  -lX11 -lXext -L. /usr/local/lib/libmlx_Linux.a

# FT		= ./libft/
# FT_LIB	= $(addprefix $(FT),libft.a)
# FT_INC	= -I ./libft/includes
# FT_LNK	= -L ./libft -l ft

# VECT	= ./vector/
# VECT_LIB = $(addprefix $(V_),vector.a)
# VECT_INC = -I ./vector/includes
# VECT_LINK = -L. ./vector/vector.a

RTV1_INC = -I ./includes

INCLUDES = $(RTV1_INC)

OBJDIR	= ./obj/

# all: obj $(OBJ2) $(FT_LIB) $(VECT_LIB) $(NAME)
all: obj $(OBJ2) $(NAME)

obj:
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<

# $(FT_LIB):
# 	make -C $(FT)

# $(VECT_LIB):
# 	make -C $(VECT)

$(NAME):
	$(CC) $(OBJ2) $(INCLUDES) $(MLX_LNK) -lm -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	# make -C $(FT) clean
	# make -C $(VECT) clean

fclean: clean
	rm -rf $(NAME)
	# make -C $(FT) fclean
	# make -C $(VECT) fclean

re: fclean all