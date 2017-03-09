/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:00:34 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 17:09:23 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H
# define SIZE_Y 800
# define SIZE_ALL 640000
# define SIZE_X	800
# define CREATE_IMAGE mlx_get_data_addr
# define PUT_IMAGE mlx_put_image_to_window
# define DEPTH ft_itoa(fract.depth)
# include <stdlib.h>
# include <unistd.h>
# include <sys/uio.h>
# include <sys/types.h>
# include <fcntl.h>
# include <mlx.h>
# include <math.h>
# include <stdio.h>

typedef struct	s_mlx
{
	void	*mlx;
	void	*win;
}				t_mlx;

typedef	struct	s_limit
{
	double	max_real;
	double	max_imag;
	double	min_real;
	double	min_imag;
	double	restart_max_real;
	double	restart_min_real;
	double	restart_max_imag;
	double	restart_min_imag;
}				t_limit;

typedef	struct	s_map
{
	double	x;
	double	y;
	double	c_imag;
	double	c_real;
	double	z_imag;
	double	z_real;
	int		red;
	int		green;
	int		blue;
}				t_map;

typedef struct	s_img
{
	int		bits;
	int		size_line;
	int		end;
	char	*line;
	void	*img;
}				t_img;

typedef	struct	s_fract
{
	t_mlx		*obj;
	t_img		*img;
	t_map		*map;
	t_limit		*limit;
	double		julia_c_imag;
	double		julia_c_real;
	size_t		flag;
	int			num;
	int			color;
	int			depth;
}				t_fract;

int				usage(int argc, char **argv);
t_mlx			*object_mlx(void);
t_img			*create_img(t_mlx *obj);
t_limit			*create_limit(int num);
t_map			*create_map(t_limit limit);
void			fill_screen(t_fract fract);
char			*ft_itoa(int n);
void			zoom(int keycode, int x, int y, t_fract fract);
void			restart(t_fract fract);
void			change_color(t_fract *fract, int keycode);
void			fill_imag_real(t_map *map, t_limit limit);
void			change_depth(t_fract *fract, int keycode);
int				mouse_julia(int x, int y, t_fract *fract);
int				mouse_update(int keycode, int x, int y, t_fract *tmp);
double			ft_c_imag(t_limit limit, double y);
double			ft_c_real(t_limit limit, double x);
int				algoritm(t_fract fract, int j);
int				burn_ship(t_fract fract, int j);
int				julia(t_fract fract, int j);
int				mandelbrot(t_fract fract, int j);
void			ft_color_fill(t_fract fract, int color, int i);
int				update(int keycode, t_fract *tmp);
void			draw(t_fract fract);
void			ft_put_pixel(t_map *map, t_img *img, int i);
#endif
