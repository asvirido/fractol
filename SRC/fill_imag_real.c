/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_imag_real.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:56:39 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/13 16:16:13 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	fill_imag_real(t_map *map, t_limit limit)
{
	int		i;

	i = 0;
	while (i < SIZE_ALL)
	{
		map[i].c_real = ft_c_real(limit, map[i].x);
		map[i].c_imag = ft_c_imag(limit, map[i].y);
		i++;
	}
}
