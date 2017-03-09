/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 16:50:51 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 16:50:53 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		julia(t_fract fract, int j)
{
	int		i;
	double	z_real;
	double	z_imag;
	double	tmp;

	i = 0;
	z_imag = fract.map[j].c_imag;
	z_real = fract.map[j].c_real;
	while (i < fract.depth)
	{
		tmp = (z_real * z_real) - (z_imag * z_imag);
		z_imag = 2 * z_real * z_imag + fract.julia_c_imag;
		z_real = tmp + fract.julia_c_real;
		if ((z_real * z_real + z_imag * z_imag) > 4)
			break ;
		i++;
	}
	return (i);
}
