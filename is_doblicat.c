/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_doblicat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 17:51:20 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/09 17:50:07 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_doblicat(t_stack *stack_a)
{
	t_stack	*stack_b;

	stack_b = stack_a->next;
	while (stack_a)
	{
		stack_b = stack_a->next;
		while (stack_b)
		{
			if (stack_a->i == stack_b->i)
				return (1);
			stack_b = stack_b->next;
		}
		stack_a = stack_a->next;
	}
	return (0);
}
