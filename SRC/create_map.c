/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 16:44:13 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/09 16:44:16 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

t_map	*create_map(t_limit limit)
{
	t_map	*new;
	int		y;
	int		i;
	int		x;

	i = 0;
	y = 0;
	x = 0;
	new = (t_map*)malloc(sizeof(t_map) * (640000 + 1));
	while (y < SIZE_Y)
	{
		if (x == SIZE_X)
			y++;
		if (x == SIZE_X)
			x = 0;
		new[i].x = x;
		new[i].y = y;
		x++;
		i++;
	}
	fill_imag_real(new, limit);
	return (new);
}
