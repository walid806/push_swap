/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 04:43:56 by wkabil            #+#    #+#             */
/*   Updated: 2025/02/27 22:32:18 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct sp_stack
{
        int i;
        struct sp_stack *next;
} t_stack;



void	sa(t_stack **a);
void	sb(t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	pb(t_stack **b, t_stack **a);
void	pa(t_stack **a, t_stack **b);
int	ft_handli(char **av);
int	ft_handlin2(char **av);
int	ft_handlin3(char **av);
int	ft_handlin4(char **av);
int	ft_hand(char **av);
char	**ft_split(char const *s, char c);
long	ft_atoi(char *str);
void	add_back(t_stack **size, t_stack *node);
t_stack	*ft_node(int n);
void	add_node(t_stack **list, int n);

#endif
