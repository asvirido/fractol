/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 16:42:01 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/08 16:42:18 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		main(int argc, char **argv)
{
	t_fract		fract;

	fract.num = usage(argc, argv);
	fract.obj = object_mlx();
	fract.limit = create_limit(fract.num);
	fract.map = create_map(*fract.limit);
	fract.color = 0xFFFFFF;
	fract.depth = 50;
	fill_screen(fract);
	mlx_key_hook(fract.obj->win, update, &fract);
	mlx_mouse_hook(fract.obj->win, mouse_update, &fract);
	mlx_hook(fract.obj->win, 6, 0, mouse_julia, &fract);
	mlx_loop(fract.obj->mlx);
	return (1);
}
