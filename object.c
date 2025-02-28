/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   object.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkabil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:46:09 by wkabil            #+#    #+#             */
/*   Updated: 2025/02/27 22:47:28 by wkabil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(char *str)
{
	int	i;
	int	d;
	long	res;

	i = 0;
	d = 1;
	res = 0;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i]== '-')
	{
		i++;
		d = -1;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res *10 + (str[i] - 48);
		i++;
	}
	res *= d;
	if (res > 2147483647 || res < -2147483648 )
		return (2147483649);
	return (res);
}
/*
char    *ft_strjoin(char const *s1, char const *s2)
{
        char    *d;
        int             i;
        int             j;

        if (!s1 || !s2)
        {
                return (NULL);
        }
        d = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
        if (d == NULL)
                return (NULL);
        i = 0;
        j = 0;
        while (s1[i])
                d[j++] = s1[i++];
        i = 0;
        while (s2[i])
                d[j++] = s2[i++];
        d[j] = '\0';
        return (d);
}*/
