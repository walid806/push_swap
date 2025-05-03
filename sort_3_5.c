/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:29:04 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/09 20:34:15 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	indexing_stack(*a);
	if ((*a)->i < (*a)->next->i)
	{
		rra(a);
		if (sort_test(*a))
			sa(a);
		return ;
	}
	else if ((*a)->i > (*a)->next->i)
	{
		if ((*a)->index == 1)
			sa(a);
		else
		{
			ra(a);
			if (sort_test(*a))
				sa(a);
		}
	}
}

void	sort_4(t_stack **a, t_stack **b)
{
	indexing_stack(*a);
	while (*a)
	{
		if ((*a)->index == 0)
		{
			pb(b, a);
			break ;
		}
		ra(a);
	}
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = (*a);
	indexing_stack(*a);
	while (tmp)
	{
		if ((*a)->index == 0)
		{
			pb(b, a);
			break ;
		}
		tmp = tmp->next;
	}
	sort_4(a, b);
	pa(a, b);
}

void	sort(t_stack **a, t_stack **b)
{
	int	i;

	i = ft_list_size(*a);
	if (i == 2)
	{
		if (sort_test(*a))
			sa(a);
		return ;
	}
	else if (i == 3)
		sort_3(a);
	else if (i == 4)
		sort_4(a, b);
	else if (i == 5)
		sort_5(a, b);
	else
	{
		push_to_b(a, b);
		push_to_a(a, b);
	}
}
