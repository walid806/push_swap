/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <wkabil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 04:43:56 by wkabil            #+#    #+#             */
/*   Updated: 2025/03/10 01:20:51 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct sp_stack
{
	int				i;
	struct sp_stack	*next;
	int				index;
}					t_stack;

void				free_split(char **arr);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				pb(t_stack **b, t_stack **a);
void				pa(t_stack **a, t_stack **b);
int					ft_handli(char **av);
int					ft_handlin2(char **av);
int					ft_handlin3(char **av);
int					ft_handlin4(char **av);
int					ft_hand(char **av);
char				**ft_split(char const *s, char c);
long				ft_atoi(char *str);
void				add_back(t_stack **size, t_stack *node);
t_stack				*ft_node(int n);
void				add_node(t_stack **list, int n);
int					is_doblicat(t_stack *stack_a);
void				indexing_stack(t_stack *stack_a);
int					ft_list_size(t_stack *begin_list);
void				push_to_b(t_stack **a, t_stack **b);
void				push_to_a(t_stack **a, t_stack **b);
int					sort_test(t_stack *a);
void				sort_3(t_stack **a);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);
void				sort(t_stack **a, t_stack **b);
void				check_which_half(t_stack **a, t_stack **b, int list);
int					check_end(t_stack **a);
void				free_stack(t_stack **a, t_stack **b);

#endif
