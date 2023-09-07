/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:43:54 by castorga          #+#    #+#             */
/*   Updated: 2023/09/04 17:43:56 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*int	ft_free()
{
	return (0);
}*/

int	ft_check_digits(int ac, char *av[])
{
	int	i;
	int	j;
	
	i = 1;
	j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
			{
				write(2, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_range(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
		{
			write(2, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

/*---------- CHECK DUPLICATES ----------*/
int	ft_check_duplic(int ac, char *av[])
{
	int	i;
	int	j;
	int	len;

	i = 1;
	j = 1;
	while (i < ac)
	{
		len = ft_strlen(av[i]);
		while (j < (ac - 1))
		{
			if (ft_strncmp(av[i], av[j + 1], INT_MAX) == 0)
			{
				write(2, "Duplicated found!\n", 18);
				return (1);
			}
			j++;
		}
		i++;
		j = i;
	}
	return (0);
}


/*---------- CHECK IF ARGV ARE VALID NUMBERS ----------*/
int	ft_check_argv_are_valid(int ac, char *av[])
{
	if (ac == 1)
		return (1);
	if (ft_check_digits(ac, av) == 1)
		return (1);
	if (ft_check_range(ac, av) == 1)
		return (1);
	if (ft_check_duplic(ac, av) == 1)
		return (1);
	return (0);
}
