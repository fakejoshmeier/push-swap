/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josh <jmeier@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 15:48:36 by josh              #+#    #+#             */
/*   Updated: 2017/12/23 11:04:34 by josh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sa(t_list **a, t_list **b)
{
	t_list	*l1;
	t_list	*l2;
	void	*tmp;

	void(b);
	l1 = *a;
	l2 = l1->next;
	tmp = l1->content;
	l1->content = l2->content;
	l2->content = tmp;
}

void	sb(t_list **a, t_list **b)
{
	sa(b, a);
}

void	ss(t_list **a, t_list **b)
{
	sa(a, b);
	ab(a, b);
}
