/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:47:41 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/17 19:46:47 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		mandelbrot(t_fract fract, int j)
{
	int		i;
	double	z_real;
	double	z_imag;
	double	tmp;

	i = 0;
	z_imag = 0;
	z_real = 0;
	while (i < fract.depth)
	{
		tmp = (z_real * z_real) - (z_imag * z_imag);
		z_imag = 2 * z_real * z_imag + fract.map[j].c_imag;
		z_real = tmp + fract.map[j].c_real;
		if ((z_real * z_real + z_imag * z_imag) > 4)
			break ;
		i++;
	}
	return (i);
}
