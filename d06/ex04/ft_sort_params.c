/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 23:06:10 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/10 23:23:26 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	repeater(char *str)
{
	int runner;

	runner = 0;
	while (*(str + runner) != '\0')
	{
		ft_putchar(*(str + runner));
		runner++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int run;

	run = 0;
	while ((s1[run] == s2[run]) && (s1[run] != '\0') && (s2[run] != '\0'))
		run++;
	return (s1[run] - s2[run]);
}

void	print_params(char *str)
{
	repeater(str);
	str++;
}
