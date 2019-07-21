/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:15:39 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/10 21:45:33 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

int		main(int argc, char **argv)
{
	argc = 0;
	repeater(argv[0]);
	ft_putchar('\n');
}
