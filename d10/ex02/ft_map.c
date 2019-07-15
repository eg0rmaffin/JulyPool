/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 21:02:51 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/15 21:54:55 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int run;
	int *res;

	run = 0;
	res = (int*)malloc(sizeof(int) * length);
	while (run < length)
	{
		res[run] = ((*f)(tab[run]));
		++run;
	}
	return (res);
}
