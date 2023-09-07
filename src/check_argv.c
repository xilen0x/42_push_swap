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
	int	len = 0;

	i = 1;		//   i 1  2  3
	while (av[i])//  124 52 45
	{
		j = 0;
		while (av[i][j])
		{
			len = ft_strlen(av[i]);
			if (ft_strncmp(av[i], av[j], len) == 0)//si es == 0 ambos caract. son iguales
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

/*----------CHECK IF ARGV ARE VALID NUMBERS----------*/
int	ft_check_argv_are_valid(char *av[])
{
	int	i;
	int	nums;

	i = 1;
	while (av[i])
	{
		nums = ft_atoi(av[i]);
		if (!(nums) || (nums < INT_MIN) || (nums > INT_MAX))
			return (1);
		i++;
	}
	return (0);
}
