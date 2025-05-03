/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <wkabil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:54:58 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/22 20:40:52 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_pu(char **argv)
{
	char	**str;
	t_stack	*stack_a;

	int (i), (d);
	stack_a = NULL;
	i = 1;
	d = 0;
	while (argv[i])
	{
		str = ft_split(argv[i], ' ');
		d = 0;
		while (str[d])
		{
			add_node(&stack_a, atoi(str[d]));
			d++;
		}
		free_split(str);
		i++;
	}
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc >= 2)
	{
		if (ft_hand(argv) == 1)
			return (free_stack(&stack_a, &stack_b), 1);
		stack_a = stack_pu(argv);
		if (is_doblicat(stack_a))
		{
			write(2, "Error\n", 6);
			return (free_stack(&stack_a, &stack_b), 1);
		}
		indexing_stack(stack_a);
		if (sort_test(stack_a) == 0)
			return (free_stack(&stack_a, &stack_b), 0);
		sort(&stack_a, &stack_b);
		free_stack(&stack_a, &stack_b);
	}
	return (0);
}
