/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ruls.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:48:00 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/08 17:18:01 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a)
{
	t_stack	*save;

	if (!a || !*a || !(*a)->next)
		return ;
	save = (*a);
	*a = (*a)->next;
	save->next = (*a)->next;
	(*a)->next = save;
	write(1, "sa\n", 3);
}

void	sb(t_stack **b)
{
	t_stack	*save;

	if (!b || !*b || !(*b)->next)
		return ;
	save = *b;
	*b = (*b)->next;
	save->next = (*b)->next;
	(*b)->next = save;
	write(1, "sb\n", 3);
}

void	rra(t_stack **a)
{
	t_stack	*save;
	t_stack	*tmp;
	t_stack	*last;

	if (!a || !(*a) || !(*a)->next)
		return ;
	save = *a;
	tmp = *a;
	last = *a;
	while (last && (last)->next)
	{
		last = last->next;
	}
	while (tmp->next != last)
		tmp = tmp->next;
	tmp->next = NULL;
	*a = last;
	(*a)->next = save;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*save;
	t_stack	*tmp;
	t_stack	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	save = *b;
	tmp = *b;
	last = *b;
	while (last && (last)->next)
	{
		last = last->next;
	}
	while (tmp->next != last)
		tmp = tmp->next;
	tmp->next = NULL;
	*b = last;
	(*b)->next = save;
	write(1, "rrb\n", 4);
}
