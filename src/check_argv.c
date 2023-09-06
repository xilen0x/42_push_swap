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

int	ft_free()
{
	return (0);
}

/*----------CHECK DUPLICATES----------*/
int	ft_check_duplic(char *av[])
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_strncmp(av[i], av[j], 11) == 0)//si es == 0 ambos caract. son iguales
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/*----------CHECK AV----------*/
int	ft_check_argv_are_valid(char *av[])
{
	int	i;
	int	j;
	int	num;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))//if it's not a digit
				return (1);
			j++;
		}
		num = ft_atoi(av[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (1);
		i++;
	}
	return (0);
}
