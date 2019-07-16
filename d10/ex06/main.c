/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 22:44:46 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/16 23:05:06 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	int run;

	run = 0;
	if (argc != 4)
		return (0);
	if ((ft_atoi(argv[3]) == 0) && (*(op_checker(argv[2])) == 47))
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	if ((ft_atoi(argv[3]) == 0) && (*op_checker(argv[2]) == 37))
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	while (argv[run] != '\0')
	{
		++run;
		if ((run == 4) && (op_checker(argv[2]) != "z") && (argc == 4))
		{
			ft_putnbr(calculator(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2]));
			return (0);
		}
	}
	return (0);
}
