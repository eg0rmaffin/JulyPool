/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 22:38:31 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/10 23:22:38 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	repeater(char *str)
{
	int run;

	run = 0;
	while (*(str + run) != '\0')
	{
		ft_putchar(*(str + run));
		run++;
	}
}

void	print_params(char *str)
{
	repeater(str);
	str++;
}

int		main(int argc, char **argv)
{
	int run;

	run = argc - 1;
	while (run > 0)
	{
		print_params(argv[run]);
		ft_putchar('\n');
		run--;
	}
}
