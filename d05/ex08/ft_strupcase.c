/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:04:41 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/09 17:05:01 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strupcase(char *str)
{
	int runner;

	runner = 0;
	while (str[runner] != '\0')
	{
		if ((str[runner] > 96) && (str[runner] < 123))
			str[runner] = str[runner] - 32;
		runner++;
	}
	return (str);
}
