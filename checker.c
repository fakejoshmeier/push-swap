/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josh <jmeier@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 22:43:05 by josh              #+#    #+#             */
/*   Updated: 2017/12/19 13:53:11 by josh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdlib.h>

void	ft_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(2);
}

int		main(int ac, char *av[])
{
	t_list	*stk;
	int		i;

	if (ac > 1)
	{
		if (!pop(&stk, ac, av) || !valid(&stk, ac, av)
			ft_error("ERROR\n");
		if (!op(&stk, ac, av))
			
	}
	write(1, "\n", 1);
	return (0);
}
