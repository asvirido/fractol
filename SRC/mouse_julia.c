/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_julia.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 17:01:42 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 17:01:42 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		mouse_julia(int x, int y, t_fract *fract)
{
	if (fract->num == 2 && fract->flag == 1)
	{
		fract->julia_c_real = ft_c_real(*fract->limit, x);
		fract->julia_c_imag = ft_c_imag(*fract->limit, y);
		fill_screen(*fract);
	}
	return (1);
}
