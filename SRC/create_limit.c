/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_limit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 17:23:36 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/09 17:23:39 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

t_limit		*create_limit(int num)
{
	t_limit *new;

	new = (t_limit*)malloc(sizeof(t_limit) + 1);
	if (num == 1)
	{
		new->max_real = 0.5;
		new->min_real = -2.0;
		new->max_imag = 1.25;
		new->min_imag = -1.25;
	}
	else
	{
		new->max_real = 2.25;
		new->min_real = -2.25;
		new->max_imag = 2;
		new->min_imag = -2;
	}
	new->restart_max_real = new->max_real;
	new->restart_min_real = new->min_real;
	new->restart_max_imag = new->max_imag;
	new->restart_min_imag = new->min_imag;
	return (new);
}
