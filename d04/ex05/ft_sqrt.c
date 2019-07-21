/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 22:18:56 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/06 22:28:27 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int c;

	c = 0;
	while ((c * c) < nb)
	{
		c++;
	}
	if ((c * c) > nb)
	{
		return (0);
	}
	else
	{
		return (c);
	}
}