/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <wkabil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:46:09 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/10 01:21:53 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int		i;
	int		d;
	long	res;

	i = 0;
	d = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-')
	{
		i++;
		d = -1;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	res *= d;
	if (res > 2147483647 || res < -2147483648)
		return (2147483649);
	return (res);
}

int	ft_list_size(t_stack *begin_list)
{
	int	size;

	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}

void	indexing_stack(t_stack *stack_a)
{
	int		i;
	t_stack	*list;
	t_stack	*tmp;

	list = stack_a;
	tmp = stack_a;
	while (stack_a)
	{
		i = 0;
		list = tmp;
		while (list)
		{
			if (stack_a->i > list->i)
				i++;
			list = list->next;
		}
		stack_a->index = i;
		stack_a = stack_a->next;
	}
}

void	free_split(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}
