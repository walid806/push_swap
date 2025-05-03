/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <wkabil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 23:11:08 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/22 20:43:50 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **a, t_stack **b)
{
	t_stack	*save;

	if (!a || !(*a))
		return ;
	while ((*a))
	{
		save = (*a)->next;
		free(*a);
		*a = save;
	}
	if (!b || !(*b))
		return ;
	while ((*b))
	{
		save = (*b)->next;
		free(*b);
		*b = save;
	}
}
