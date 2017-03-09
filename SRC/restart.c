/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restart.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 14:15:08 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 14:15:09 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	restart(t_fract fract)
{
	fract.limit->max_real = fract.limit->restart_max_real;
	fract.limit->min_real = fract.limit->restart_min_real;
	fract.limit->max_imag = fract.limit->restart_max_imag;
	fract.limit->min_imag = fract.limit->restart_min_imag;
	fill_imag_real(fract.map, *fract.limit);
	fill_screen(fract);
}
