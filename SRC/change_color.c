/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   change_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 14:58:53 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 14:59:03 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

void	change_color(t_fract *fract, int keycode)
{
	if (keycode == 18)
		fract->color = 0xFFFFFF;
	if (keycode == 19)
		fract->color = 0x002302;
	if (keycode == 20)
		fract->color = 0x030023;
	if (keycode == 21)
		fract->color = 0x230102;
	if (keycode == 22)
		fract->color = 0x0F0F0F;
	if (keycode == 23)
		fract->color = 0x0F0F00;
	if (keycode == 26)
		fract->color = 0x00F0FF;
	fill_screen(*fract);
}
