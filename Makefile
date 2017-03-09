# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makafile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asvirido <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/04 14:27:54 by asvirido          #+#    #+#              #
#    Updated: 2017/02/15 17:25:04 by asvirido         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

FLAGS = -c -O2

MLX = -lmlx -framework OpenGL -framework AppKit

HEADER = head.h

SRC =	./SRC/main.c ./SRC/object_mlx.c ./SRC/create_img.c\
		./SRC/create_limit.c ./SRC/create_map.c ./SRC/fill_imag_real.c\
		./SRC/algoritm.c ./SRC/ft_color_fill.c ./SRC/draw.c\
		./SRC/fill_screen.c ./SRC/usage.c ./SRC/mandelbrot.c\
		./SRC/burn_ship.c ./SRC/ft_c_imag.c ./SRC/ft_c_real.c\
		./SRC/zoom.c ./SRC/restart.c ./SRC/change_color.c\
		./SRC/ft_itoa.c ./SRC/julia.c ./SRC/update.c\
		./SRC/change_depth.c ./SRC/mouse_julia.c ./SRC/mouse_update.c\

BINS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(BINS)
	gcc -g -o $(NAME) $(BINS)  $(MLX)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -g -o  $@ $<

clean:
	 /bin/rm -f $(BINS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
