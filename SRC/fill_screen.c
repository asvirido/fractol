/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_screen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 10:14:00 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/17 19:35:56 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	fill_screen(t_fract fract)
{
	int		i;
	int		res;

	i = 0;
	while (i < SIZE_ALL)
	{
		res = algoritm(fract, i);
		if (res < fract.depth)
			ft_color_fill(fract, ((res + 1 / i + 1) * fract.color), i);
		else
			ft_color_fill(fract, 0, i);
		i++;
	}
	fract.img = create_img(fract.obj);
	draw(fract);
	PUT_IMAGE(fract.obj->mlx, fract.obj->win, fract.img->img, 0, 0);
	mlx_string_put(fract.obj->mlx, fract.obj->win, 10, 10, 0xFF0000, DEPTH);
	free(fract.img);
}
