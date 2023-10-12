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

/* Funciones permitidas:
◦ write
◦ read
◦ malloc
◦ free
◦ exit

https://www.figma.com/file/kJE3C5sebDLtd5imytkOUa/Untitled?type=design&node-id=0%3A1&mode=design&t=nONFp0J2mEaVbnq3-1

*/

#include "../include/push_swap.h"

int	main(int ac, char *av[])
{
	if (ac > 1)
	{
		if (ac == 2)
		{
			ft_prev_split(ac, av);
			return (0);
		}
		else
		{
			if (ft_check_argv_are_valid(ac, av))
				return (1);
			push_swap(ac - 1, av + 1);
		}
	}
	return (0);
}
