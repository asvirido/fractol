/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 15:21:56 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/13 16:16:51 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		algoritm(t_fract fract, int j)
{
	int		res;

	if (fract.num == 1)
		res = mandelbrot(fract, j);
	if (fract.num == 2)
		res = julia(fract, j);
	if (fract.num == 3)
		res = burn_ship(fract, j);
	return (res);
}
