/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 16:34:28 by asvirido          #+#    #+#             */
/*   Updated: 2017/01/28 17:04:10 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		update(int keycode, t_fract *fract)
{
	if (keycode == 53)
		exit(1);
	if (keycode == 12)
		fract->flag = 0;
	if (keycode == 0)
		fract->flag = 1;
	if (keycode == 36)
		restart(*fract);
	if ((keycode >= 18 && keycode <= 23) || keycode == 26)
		change_color(fract, keycode);
	if (keycode == 69 || keycode == 78)
		change_depth(fract, keycode);
	return (1);
}
