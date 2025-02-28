#include "push_swap.h"


t_stack *stack_pu(char **argv)
{
	int (i), (d);
	char **str;
	t_stack *stack_a = NULL;

	i = 1;
	d = 0;
	while(argv[i])
	{
		str = ft_split(argv[i], ' ');
		d = 0;
		while(str[d])
		{
			add_node(&stack_a, atoi(str[d]));
			d++;
		}
		i++;
	}
	return (stack_a);
}


int main(int argc,char **argv)
{
	int (i), (d), (*nbr);
	char **str;
	t_stack *stack_a = NULL;
	t_stack *stack_b = NULL;

	d = 0;
	 i = 1;
	if(argc >= 2)
	{
		if(ft_hand(argv) == 1)
			return -1;
		stack_a = stack_pu(argv);
		/*while(argv[i])
		{
			str = ft_split(argv[i], ' ');
			d = 0;
			while(str[d])
			{
				add_node(&stack_a, atoi(str[d]));
				d++;
			}
			i++;
		}*/
		while(stack_a)
		{
			printf("%d", stack_a->i);
			stack_a = stack_a->next;
		}
	}
}
