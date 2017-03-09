/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 10:14:04 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 10:14:05 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	zoom_mouse(int keycode, int x, int y, t_fract fract)
{
	double	beta_r;
	double	beta_i;
	double	mult;

	beta_r = ft_c_real(*fract.limit, x);
	beta_i = ft_c_imag(*fract.limit, y);
	mult = (keycode == 5 ? 0.9 : 1.1);
	fract.limit->max_real = fract.limit->max_real * mult + beta_r * (1 - mult);
	fract.limit->min_real = fract.limit->min_real * mult + beta_r * (1 - mult);
	fract.limit->max_imag = fract.limit->max_imag * mult + beta_i * (1 - mult);
	fract.limit->min_imag = fract.limit->min_imag * mult + beta_i * (1 - mult);
	fill_imag_real(fract.map, *fract.limit);
	fill_screen(fract);
}

void	zoom(int keycode, int x, int y, t_fract fract)
{
	if (keycode == 5 || keycode == 4)
		zoom_mouse(keycode, x, y, fract);
}
