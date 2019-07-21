/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:55:02 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/09 13:55:07 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcpy(char *dest, char *src)
{
	int runner;

	runner = 0;
	while (src[runner] != '\0')
	{
		dest[runner] = src[runner];
		runner++;
	}
	dest[runner] = '\0';
	return (dest);
}
