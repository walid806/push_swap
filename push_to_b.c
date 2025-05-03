/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <wkabil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:17:53 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/10 01:59:04 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack **a, t_stack **b)
{
	int (start), (end);
	start = 0;
	end = check_end(a);
	while (*a)
	{
		if ((*a)->index < start)
		{
			pb(b, a);
			if ((*b)->next != NULL)
				rb(b);
			start++;
			end++;
		}
		else if ((*a)->index >= start && (*a)->index <= end)
		{
			pb(b, a);
			if ((*b)->next != NULL && ((*b)->i < (*b)->next->i))
				sb(b);
			start++;
			end++;
		}
		else
			ra(a);
	}
}

void	push_to_a(t_stack **a, t_stack **b)
{
	int	list;

	list = ft_list_size(*b);
	list -= 1;
	while ((*b))
	{
		check_which_half(a, b, list);
		list--;
	}
}

void	check_which_half(t_stack **a, t_stack **b, int list)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = (*b);
	while (tmp)
	{
		if ((tmp)->index == list)
		{
			if (i <= list / 2)
			{
				while (i-- > 0)
					rb(b);
			}
			else
			{
				while (i++ <= list)
					rrb(b);
			}
			pa(a, b);
			break ;
		}
		i++;
		tmp = tmp->next;
	}
}

int	check_end(t_stack **a)
{
	int	list;
	int	end;

	list = ft_list_size(*a);
	if (list <= 100)
		end = list / 6;
	else
		end = list / 14;
	return (end);
}
