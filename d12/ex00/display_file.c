/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 18:12:26 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/18 19:01:43 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fnum;
	char c;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc == 2)
	{
		fnum = open(argv[1], O_RDONLY);
		while (read(fnum, &c, 1))
			write (1, &c, 1);
	}
	return (0);
}
