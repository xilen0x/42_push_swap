/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: castorga <castorga@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 11:32:41 by castorga          #+#    #+#             */
/*   Updated: 2023/08/22 12:38:38 by castorga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if ((!ft_isdigit(av[1][i]) && av[1][i] != ' ') || av[1][i] != '\0')
			{
				write (2, "Error\n", 6);
				return (1);
			}
			i++;
		}
		ft_prev_split(ac, av);
		return (0);
	}
	else if (ac > 2)
	{
		if (ft_check_argv_are_valid(ac, av))
			return (1);
		push_swap(ac - 1, av + 1);
	}
	return (0);
}
