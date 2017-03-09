/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_real.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:01:55 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/19 18:49:28 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

double	ft_c_real(t_limit limit, double x)
{
	double	range_real;
	double	res;

	range_real = (limit.max_real - limit.min_real) / SIZE_Y;
	res = x * range_real + limit.min_real;
	return (res);
}
