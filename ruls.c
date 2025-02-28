#include "push_swap.h"


void	sa(t_stack **a)
{
	t_stack *save;
	save = (*a);
	*a = (*a)->next;
	(*a)->next = save; 
	write(1,"sa\n",3);
}

void sb(t_stack **b)
{
	t_stack *save;
	save = *b;
	*b = (*b)->next;
	(*b)->next = save;
	write(1,"sb\n", 3);
}

void rra(t_stack **a)
{
	t_stack *save;
	t_stack *tmp;
	t_stack *last;


	save = *a;
	tmp = *a;
	last = *a;
	while(last && (last)->next)
	{
		last = last->next;
	}
	while(tmp->next != last)
		tmp = tmp->next;
	tmp->next = NULL;
	*a = last;
	(*a)->next = save;
	write(1,"rra\n",4);
}

void rrb(t_stack **b)
{
        t_stack *save;
        t_stack *tmp;
        t_stack *last;


        save = *b;
        tmp = *b;
        last = *b;
        while(last && (last)->next)
        {
                last = last->next;
        }
        while(tmp->next != last)
                tmp = tmp->next;
        tmp->next = NULL;
        *b = last;
        (*b)->next = save;
        write(1,"rra\n",4);
}


void ra(t_stack **a)
{
	t_stack  *tmp;
	t_stack *save;
	t_stack *last;

	save = (*a);
	last = (*a);
	(*a) = save->next; 
	while(last && (last)->next)
                last = last->next;
	last->next = save;
	save->next = NULL;
	write(1,"ra\n",3);
}

void rb(t_stack **b)
{
        t_stack  *tmp;
        t_stack *save;
        t_stack *last;

        save = (*b);
        last = (*b);
        (*b) = save->next;
        while(last && (last)->next)
                last = last->next;
        last->next = save;
        save->next = NULL;
	write(1,"rb\n",3);

}


void pb(t_stack **b, t_stack **a)
{
	t_stack *save;
	t_stack *tmp;


	save = (*a);
	*a = (*a)->next;
	tmp = (*b);
	(*b) = save;
	(*b)->next = tmp;
	write(1,"pb\n",3);
}



