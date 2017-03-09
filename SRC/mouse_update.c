/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mouse_update.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 17:01:33 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 17:01:34 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

int		mouse_update(int keycode, int x, int y, t_fract *tmp)
{
	if (keycode == 5 || keycode == 4)
		zoom(keycode, x, y, *tmp);
	return (1);
}
