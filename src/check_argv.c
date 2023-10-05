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

/*---------- CHECK DIGITS ----------*/
int	ft_check_digits(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_contains_digit(av[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

/*---------- CHECK RANGE AV ----------*/
int	ft_check_range(int ac, char *av[])
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi(av[i]) > INT_MAX || ft_atoi(av[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

/*---------- CHECK DUPLICATES ----------*/
int	ft_check_duplic(int ac, char *av[])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < ac)
	{
		while (j < (ac - 1))
		{
			if (ft_strncmp(av[i], av[j + 1], INT_MAX) == 0)
				return (1);
			j++;
		}
		i++;
		j = i;
	}
	return (0);
}

/*------------------ CHECKS ------------------*/
int	ft_check_argv_are_valid(int ac, char *av[])
{
	if (ft_check_digits(ac, av) == 1)
	{
		//write (1, "Error\n", 6);antes de entregar reemplazar con este write
		write (1, "error con digito\n", 17);
		return (1);
	}
	if (ft_check_range(ac, av) == 1)
	{
		write (1, "error con rango\n", 16);
		return (1);
	}
	if (ft_check_duplic(ac, av) == 1)
	{
		write (1, "error de duplicado\n", 19);
		return (1);
	}
	return (0);
}
