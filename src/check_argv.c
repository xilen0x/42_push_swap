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

int	ft_check_duplic(char *av[])
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (av[i])
	{
		j = 0;
		while (av[j])
		{
			if (ft_strncmp(av[i], av[j], 11) == 0)//si es == 0 ambos caract. son iguales
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_check_errors(int argc, char *av[])
{
	int	i;
	int	j;
	int	num;

	i = 0;
	j = 1;
	if (argc > __INT_MAX__)
		return (1);
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			if (!ft_isdigit(av[j][i]))//retorna 1 si es digito
				return (1);
			i++;
		}
		num = ft_atoi(av[j]);
		if (num > __INT_MAX__)
			return (1);
		j++;
	}
	return (0);
}
