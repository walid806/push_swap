#include "push_swap.h"

int  ft_handli(char **av)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while(av[i])
	{
		j = 0;
		while(av[i][j])
		{
	
			if((av[i][j] == '-'|| av[i][j] == '+') && (!(av[i][j + 1] >= '0' && av[i][j + 1] <= '9')))
				{
						return 1;
				}
			j++;
		}
		i++;
	}
	return 0;
}

int ft_handlin2(char **av)
{
	int i;
	int j;

	i = 1;
	while(av[i])
	{
		j  = 0;
		while(av[i][j])
		{
			if(!(av[i][j] >= '0' && av[i][j] <= '9' ) && av[i][j] != ' ' && (av[i][j] != '-'&& av[i][j] != '+'))
			{
				return 1;
			}
			j++;
		}
		i++;
	}
	return 0;
}

int ft_handlin3(char **av)
{
	int i;
	int j;

	i = 1;
	while(av[i])
	{
		j = 0;
		while(av[i][j])
		{
			if(av[i][j] == '-' || av[i][j] == '+')
			{
				if ((av[i][j - 1] != 32) && av[i][j - 1] != '\0')
				{
                                return 1;
				}
			}
			j++;
		}
		i++;
	}
	return 0;
}

int ft_handlin4(char **av)
{
	int i;
	int d;
	int j;

	i = 1;
	while(av[i])
	{
		d = 1;
	j = 0;
		while(av[i][j])
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
			{
				d = 0;
			}
			j++;
		}
		if(av[i][0] == '\0')
			return 1;
		if (d == 1)
			return 1;
		i++;
	}
	return (d);
}

int ft_hand(char **av)
{
	int i;

	i = 0;
	while(av[i])
	{
		if(ft_atoi(av[i]) == 2147483649)
		{
			write(2, "Error\n",6);
			return 1;
		}
		i++;
	}
	if ( ft_handli(av) || ft_handlin2(av) || ft_handlin3(av) || ft_handlin4(av))
	{
		write(2,"Error\n", 6);
		return 1;
	}
	return 0;
}
