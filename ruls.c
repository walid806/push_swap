#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct sp_stack
{
	int i;
	struct sp_stack *next;
}		t_stack;


void  sa(t_stack **a)
{
	t_stack *save;
	save = (*a);
	*a = (*a)->next;
	(*a)->next = save; 
	write(1,"sa",2);
}

void sb(t_stack **b)
{
	t_stack *save;
	save = *b;
	*b = (*b)->next;
	(*b)->next = save;
	write(1,"sb", 2);
}

void ra(t_stack **a)
{
	t_stack *save;

	save = *a;

	
}


int main (int argc ,char **argv)
{
	struct sp_stack *head  = NULL;
	struct sp_stack *dest = NULL;
	head = malloc(sizeof(struct sp_stack));
	dest = malloc(sizeof(struct sp_stack));
	if (argc == 3)
	{
		head->i = atoi(argv[1]);
		dest->i = atoi(argv[2]);

		head->next = dest;
                dest->next = NULL;

		sb(&head);
		printf("\n%d-->%d\n",head->i,head->next->i);
		
	}else {
	printf("rcyvtuvu");
	}
	
}
