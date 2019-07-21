/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:09:47 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/09 17:23:48 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strlowcase(char *str)
{
	int		runner;

	runner = 0;
	while (str[runner] != '\0')
	{
		if ((str[runner] > 64) && (str[runner] < 91))
			str[runner] = str[runner] + 32;
		runner++;
	}
	return (str);
}
