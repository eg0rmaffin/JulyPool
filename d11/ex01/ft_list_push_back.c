/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckumera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 19:05:23 by ckumera           #+#    #+#             */
/*   Updated: 2019/07/17 21:41:57 by ckumera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	if (*begin_list == 0)
		*begin_list = ft_create_elem(data);
	else
	{
		elem = *begin_list;
		while (elem->next)
			elem = elem->next;
		elem = ft_create_elem(elem);
	}
}
