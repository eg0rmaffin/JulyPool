/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 17:05:36 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/06 17:21:08 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int runner;
	int b;

	runner = 1;
	b = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if ((nb > 0) && (nb < 13))
	{
		while (runner < b)
		{
			nb = nb * runner;
			runner = runner + 1;
		}
	}
	else if ((nb < 0) || (nb > 12))
	{
		return (0);
	}
	return (nb);
}
