/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c_imag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 12:01:59 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 12:02:00 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

double	ft_c_imag(t_limit limit, double y)
{
	double	range_imag;
	double	res;

	range_imag = (limit.max_imag - limit.min_imag) / SIZE_Y;
	res = y * range_imag + limit.min_imag;
	return (res);
}
