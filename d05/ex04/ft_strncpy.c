/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:38:46 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/09 14:45:35 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int runner;

	runner = 0;
	while (runner < n)
	{
		dest[runner] = src[runner];
		runner++;
	}
	dest[runner] = '\0';
	return (dest);
}
