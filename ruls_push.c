/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruls_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:48:50 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/09 20:12:15 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*save;
	t_stack	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	save = (*a);
	last = (*a);
	(*a) = save->next;
	while (last && (last)->next)
		last = last->next;
	last->next = save;
	save->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	t_stack	*save;
	t_stack	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	save = (*b);
	last = (*b);
	(*b) = save->next;
	while (last && (last)->next)
		last = last->next;
	last->next = save;
	save->next = NULL;
	write(1, "rb\n", 3);
}

void	pb(t_stack **b, t_stack **a)
{
	t_stack	*save;
	t_stack	*tmp;

	if (!a || !*a)
		return ;
	save = (*a);
	*a = (*a)->next;
	tmp = (*b);
	(*b) = save;
	(*b)->next = tmp;
	write(1, "pb\n", 3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*save;
	t_stack	*tmp;

	if (!b || !*b)
		return ;
	save = (*b);
	*b = (*b)->next;
	tmp = (*a);
	(*a) = save;
	(*a)->next = tmp;
	write(1, "pa\n", 3);
}
