/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 19:16:09 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/09 19:16:14 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int		run;

	run = 0;
	while (str[run] != '\0')
	{
		if ((str[run] == 43) || (str[run] == 45) || (str[run] == 32))
		{
			if ((str[run + 1] > 96) && (str[run + 1] < 123))
			{
				str[run + 1] = str[run + 1] - 32;
			}
		}
		else if ((str[run] != 43) || (str[run] != 45) || (str[run] != 32))
		{
			if ((str[run + 1] > 64) && (str[run + 1] < 91))
			{
				str[run + 1] = str[run + 1] + 32;
			}
		}
		run++;
	}
}
