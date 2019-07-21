/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctracy <ctracy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 14:27:40 by ctracy            #+#    #+#             */
/*   Updated: 2019/07/07 16:53:59 by ctracy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int width, char a, char b, char c)
{
	int count;

	count = 0;
	if (width == 1)
	{
		ft_putchar(a);
		ft_putchar('\n');
		return ;
	}
	else
	{
		ft_putchar(a);
		while (count < (width - 2))
		{
			ft_putchar(b);
			count++;
		}
		ft_putchar(c);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int count;

	count = 0;
	if (y <= 0 || x <= 0)
	{
		ft_putchar('\n');
		return ;
	}
	print_line(x, 'A', 'B', 'C');
	while (count < (y - 2))
	{
		print_line(x, 'B', ' ', 'B');
		count++;
	}
	if (y == 1)
		return ;
	print_line(x, 'C', 'B', 'A');
}
