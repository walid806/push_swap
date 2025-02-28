#include "push_swap.h"

t_stack *ft_node(int n)
{
	t_stack *node;

	node = malloc(sizeof(t_stack));
	if(!node)
		return (NULL);
	node->i = n;
	node->next = NULL;
	return (node);
}

void add_back(t_stack **list, t_stack *node)
{
	t_stack *save;

	if (*list == NULL)
	{
		*list = node;
		return ;
	}
	if (!node)
	{
		return ;
	}

	save = (*list);
	while(save->next)
		save = save->next;
	save->next = node;
}

void add_node(t_stack **list, int n)
{
	t_stack *node;

	node = ft_node(n);
	add_back(list, node);
}

