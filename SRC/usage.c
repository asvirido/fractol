/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usage.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asvirido <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 10:15:51 by asvirido          #+#    #+#             */
/*   Updated: 2017/02/15 10:15:52 by asvirido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../head.h"

static void		ft_putstr(char *s)
{
	int		i;

	while (s[i])
		i++;
	write(1, s, i);
}

static void		ft_error(void)
{
	ft_putstr("Usage: ./fractal 1 || 2 || 3\n");
	ft_putstr("		1: Mandelbrot\n");
	ft_putstr("		2: Julia\n");
	ft_putstr("		3: Burnship\n");
	exit(1);
}

int				usage(int argc, char **argv)
{
	int		num;

	num = 0;
	if (argc == 1)
		ft_error();
	if (argv[1][0] == '1')
		num = 1;
	else if (argv[1][0] == '2')
		num = 2;
	else if (argv[1][0] == '3')
		num = 3;
	if (num == 0)
		ft_error();
	return (num);
}
