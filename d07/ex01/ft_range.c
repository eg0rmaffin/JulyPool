/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 23:12:02 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/11 23:17:58 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_range(int min, int max)
{
	int run;
	int *range;

	run = 0;
	if (min >= max)
		return (0);
	range = malloc(sizeof(max - min));
	if (range == 0)
		return (0);
	while (range[run] != '\0')
		run++;
	return (run);
}
