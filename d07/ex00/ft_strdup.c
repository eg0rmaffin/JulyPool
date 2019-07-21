/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 14:32:02 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/11 18:52:45 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int l;

	l = 0;
	while (*str++ != '\0')
		l++;
	return (l);
}

char	*ft_strdup(char *src)
{
	int		run;
	char	*str;

	run = ft_strlen(src);
	if (run == 0)
		return (0);
	str = malloc(sizeof(src) * (run + 1));
	run = 0;
	while (src[run] != '\0')
	{
		str[run] = src[run];
		run++;
	}
	str[run] = '\0';
	return (str);
}
