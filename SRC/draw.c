/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 17:24:23 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/10 17:24:26 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	ft_put_pixel(t_map *map, t_img *img, int i)
{
	int		x;

	if (map[i].y >= 0 && map[i].x >= 0)
		if (map[i].y < SIZE_Y && map[i].x < SIZE_X)
		{
			x = (int)map[i].y * img->size_line + (int)map[i].x * 4;
			if (x < SIZE_Y * SIZE_X * 4)
			{
				img->line[x] = map[i].blue;
				img->line[x + 1] = map[i].green;
				img->line[x + 2] = map[i].red;
			}
		}
}

void	draw(t_fract fract)
{
	int		i;

	i = 0;
	while (i < SIZE_ALL)
	{
		ft_put_pixel(fract.map, fract.img, i);
		i++;
	}
}
